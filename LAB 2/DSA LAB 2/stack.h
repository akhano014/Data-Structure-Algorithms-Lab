#pragma once
template<class Itemtype>
class Stack {
private:
	int top;
	int max_stack;
	Itemtype* items;
public:
	Stack();
	Stack(int max);
	~Stack();
	bool isFull() const;
	bool isEmpty()const;
	void push(Itemtype Nitem);
	void pop(Itemtype& Items);
};
