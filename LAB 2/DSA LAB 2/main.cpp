#include<iostream>
#include"stack.cpp"
using namespace std;
int main() {
	Stack<int> Intwalastack;
	Stack<float> floatwalastack;

	int due;
	float wala;
	Intwalastack.push(69);
	floatwalastack.push(69.9);

	Intwalastack.pop(due);
	cout << due << endl;

	floatwalastack.pop(wala);
	cout << wala << endl;
	return 0;
}