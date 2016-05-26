#include <iostream>
#include <assert.h>
using namespace std;

template <class T>
struct Node {
	T data;
	Node<T>* next;
	Node() 
	{
		next = nullptr;
	};
	Node(T x)
	{
		data = x;
		next = nullptr;
	}
};
template <class T>
class List {
private:
	Node<T>* headnode;
	Node<T>* tailnode;
	int length;
public:
	List() 
	{
		headnode = nullptr;
		tailnode = headnode;
		length = 0;
	};
	void add(T x)
	{
		auto temp = new Node<T>(x);
		
		if (nullptr == tailnode)
		{
			tailnode = headnode = temp;
		}
		else
		{
			tailnode->next = temp;
			tailnode = temp;
		}
		++length;
	}
	void print()
	{
		assert(headnode != nullptr);

		for (Node<T>* i = headnode; i != nullptr; i = i->next)
		{
			cout << i->data << endl;
		}
	}
	void deleteRandomNode(Node<T>* x);
};
/*
在没提供头结点的情况下，用节点替换后再删除的方式删除给定位置的节点
*/
template <class T>
void List<T>::deleteRandomNode(Node<T>* x)
{
	assert(nullptr != x->next);
	assert(nullptr != x);
	Node<T>* temp = x->next;

	x->data = temp->data;
	x->next = temp->next;
	delete temp;
}
int main() {
	auto temp = new List<int>;

	for (int i = 0; i < 10; ++i)
		temp->add(i);
	temp->print();
	getchar();
	return 0;
}