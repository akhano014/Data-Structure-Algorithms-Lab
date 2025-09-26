#pragma once
template<class ItemType>
class Que {
private:
	int front;
	int rear;
	int maxQue;
	int count;
	ItemType* items;
public:
	Que();
	Que(int max);
	~Que();
	int IsFull() const;
	int IsEmpty() const;
	void reversenumber(ItemType K);
	void Insert(ItemType newItem);
	void Remove(ItemType& item);
};
