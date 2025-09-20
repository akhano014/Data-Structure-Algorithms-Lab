#include"stack.cpp"
#include<iostream>
using namespace std;
int  main() {
	Stackpractice<int> Intwala;
	Stackpractice<float> Floatwala;

	int ivalue=0;
	float fvalue=0.0;
	Intwala.push(23);
	Floatwala.push(34.4);

	Intwala.pop(ivalue);
	cout << ivalue << endl;
	Floatwala.pop(fvalue);
	cout << fvalue << endl;
}