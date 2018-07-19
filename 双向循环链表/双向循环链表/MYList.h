#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<assert.h>
using namespace std;
typedef int TypeData;
struct ListNode
{
	typedef ListNode Node;
	Node*_next;
	Node*_prev;
	TypeData _data;
	ListNode(const  TypeData &data)
		:_data(data),
		_next(NULL),
		_prev(NULL)
	{

	}

};
class List
{
	typedef ListNode Node;
public:

	friend ostream&operator<<(ostream&_cout, const List&ls);
	List() :_head(NULL)
	{

	}
	List(const TypeData&data)
	{
		_head = GetNode(data);
		_head->_next = _head;
		_head->_prev = _head;
	}
	List(const List&ls) :_head(NULL)
	{
		Node*lsnext = ls._head;
		while (lsnext != ls._head)
		{
			Pushback(lsnext->_data);
		}
	}
	void Pushback(const TypeData& data)
	{
		Node*tail = GetNode(data);
		if (_head == NULL)
		{
			_head = tail;
			_head->_next = _head;
			_head->_prev = _head;
			return;
		}
		tail->_next = _head;
		tail->_prev = _head->_prev;
		_head->_prev->_next = tail;
		_head->_prev = tail;
	}
	void Popback()
	{
		if (_head == NULL)
			return;
		if (_head->_next == _head)
		{
			delete _head;
			_head = NULL;
			return;
		}
		Node*del = _head->_prev;
		_head->_prev = del->_prev;
		del->_prev->_next = _head;
		delete del;
	}
	void PushFront(const TypeData&data)
	{
		Node*NewNode = new Node(data);
		if (_head == NULL)
		{
			_head = NewNode;
			_head->_next = _head;
			_head->_prev = _head;
			return;
		}
		NewNode->_next = _head;
		NewNode->_prev = _head->_prev;
		_head->_prev->_next = NewNode;
		_head->_prev = NewNode;
		_head = NewNode;
	}
	void PopFront()
	{
		if (_head == NULL)
			return;
		if (_head == _head->_next)
		{
			delete _head;
			_head = NULL;
			return;
		}
		Node*del = _head;
		_head->_next->_prev = del->_prev;
		del->_prev->_next = del->_next;
		_head = del->_next;
		delete del;

	}
	Node* Find(TypeData const data)
	{
		if (_head == NULL)
		{
			return NULL;
		}
		Node*RetNode = _head;
		while (RetNode->_next != _head)
		{
			if (RetNode->_data == data)
				return RetNode;
			RetNode = RetNode->_next;
		}
		if (RetNode->_data == data)
		{
			return RetNode;
		}
		return NULL;
	}
	Node* Erase(Node* pos)
	{
		assert(_head);
		if (pos == NULL)
			return NULL;
		if (pos == _head)
		{
			if (_head == _head->_next)
			{
				delete _head;
				_head = NULL;
				return NULL;
			}
			Node*del = _head;
			_head->_next->_prev = del->_prev;
			del->_prev->_next = del->_next;
			_head = del->_next;
			pos = pos->_next;
			delete del;
			return pos;
		}
		Node*RetNode = _head;
		while (1)
		{
			if (RetNode == pos)
			{
				pos->_prev->_next = pos->_next;
				pos->_next->_prev = pos->_prev;
				RetNode = pos->_next;
				delete pos;
				return RetNode;
			}
			RetNode = RetNode->_next;
			if (RetNode == _head)
			{
				return NULL;
			}
		}

	}
	Node* InsertFront(Node* pos, const TypeData& data)
	{
		assert(pos&&_head);
		Node*NewNode = new Node(data);
		NewNode->_next = pos;
		NewNode->_prev = pos->_prev;
		pos->_prev->_next = NewNode;
		pos->_prev = NewNode;
		if (pos == _head)
		{
			_head = NewNode;
		}
		return NewNode;
	}
	Node* InsertBack(Node* pos, const TypeData& data)
	{
		assert(pos&&_head);
		Node*NewNode = new Node(data);
		NewNode->_next = pos->_next;
		pos->_next->_prev = NewNode;
		NewNode->_prev = pos;
		pos->_next = NewNode;
		return NewNode;
	}
	size_t Size()
	{
		size_t count = 0;
		if (_head == NULL)
		{
			return 0;
		}
		Node*temp = _head;
		while (temp->_next != _head)
		{
			++count;
			temp = temp->_next;
		}
		return ++count;
	}
	void Clear()
	{
		if (_head == NULL)
		{
			return;
		}
		Node*del = _head;
		Node*next = _head->_next;
		_head->_prev->_next = NULL;
		while (next != NULL)
		{
			delete del;
			del = next;
			next = next->_next;
		}
		_head = NULL;
	}
	~List()
	{
		if (_head)
		{
			Clear();
		}
	}
private:
	Node*GetNode(const Ty	peData& data)
	{
		return new Node(data);
	}
	Node* _head;
};
ostream&operator<<(ostream&_cout, const List&ls)
{
	List::Node*next = ls._head;
	if (!next)
		return  _cout;

	do
	{
		_cout << next->_data << " ";
		next = next->_next;

	} while (next != ls._head);

	return _cout;
}