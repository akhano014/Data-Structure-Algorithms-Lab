#include"Queue.h"
#include<iostream>

using namespace std;

template<class ItemType>
Que<ItemType>::Que()
{
	maxQue = 501;
	front = 0;
	rear = 0;
	count = 0;
	items = new ItemType[maxQue];
}

template<class ItemType>
Que<ItemType>::Que(int max)
{
	maxQue = max;
	front = 0;
	rear = 0;
	count = 0;
	items = new ItemType[maxQue];
}

template<class ItemType>
Que<ItemType>::~Que() {
	delete[] items;
}

template<class ItemType>
int Que<ItemType>::IsEmpty() const
{
	return (count == 0);
}
template<class ItemType>
int Que<ItemType>::IsFull() const
{
	return (count == maxQue);
}
template<class ItemType>
void Que<ItemType>::Insert(ItemType newItem)
{
	if (IsFull())
		cout << "Over Flow";
	else
	{
		items[rear] = newItem;
		rear = (rear + 1) % maxQue;
		++count;
	}
}

template<class ItemType>
void Que<ItemType>::Remove(ItemType& item)
{
	if (IsEmpty())
		cout << "Under Flow";
	else
	{
		item = items[front];
		front = (front + 1) % maxQue;
		--count;
	}
}

int main() {
	Que<int> q1(10);
	int no;
	cout << "Enter the values of Queue: ";
	for (int i = 0;i < 10;i++) {
		cin >> no;
		q1.Insert(no);
	}

	int k;
	cout << "Enter k (number of elements to reverse): ";
	cin >> k;

	q1.reversenumber(k);

	cout << "Queue after reversing first " << k << " elements: ";
	int valy;
	while (!q1.IsEmpty()) {
		q1.Remove(valy);
		cout << "The values of Queue are: " << valy << endl;
	}
	cout << endl;
	return 0;
}