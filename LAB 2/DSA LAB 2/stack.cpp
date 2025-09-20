#include"stack.h"
#include<iostream>
using namespace std;

template<class Itemtype>
Stack<Itemtype>::Stack() {
	max_stack = 400;
	top = -1;
	items = new Itemtype[400];
}

template<class Itemtype>
Stack<Itemtype>::Stack(int max){
	max_stack = max;
	top = -1;
	items = new Itemtype[max];
}

template<class Itemtype>
Stack<Itemtype>::~Stack() {
	delete[]items;
}

template<class Itemtype>
bool Stack<Itemtype>::isEmpty() const{
	return (top == -1);
}

template<class Itemtype>
bool Stack<Itemtype>::isFull() const {
	return (top ==max_stack-1);
}

template<class Itemtype>
void Stack<Itemtype>::push(Itemtype Nitem) {
	if (isFull()) {
		std::cout << "Nigga The Stack is Full";
		exit(1);
	}
	top++;
	items[top] = Nitem;
}

template<class Itemtype>
void Stack<Itemtype>::pop(Itemtype&Items) {
	if (isEmpty()) {
		std::cout << "Nigga The Stack is Empty";
		exit(1);
	}
	Items=items[top];
	top--;
}
