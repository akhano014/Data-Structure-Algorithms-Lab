#include"stack.h"
#include<iostream>
using namespace std;

template<class Arraytype>
Stackpractice<Arraytype>::Stackpractice() {
	topvalue = -1;
	maxi_size=200;
	Dynamicitems = new Arraytype[200];
}

template<class Arraytype>
Stackpractice<Arraytype>::Stackpractice(int maxi) {
	topvalue = -1;
	maxi_size = maxi;
	Dynamicitems = new Arraytype[maxi];
}

template<class Arraytype>
bool Stackpractice<Arraytype>::isEmpty() const {
	return(topvalue == -1);
}

template<class Arraytype>
bool Stackpractice<Arraytype>::isFull() const {
	return(topvalue==maxi_size-1);
}

template<class Arraytype>
Stackpractice<Arraytype>::~Stackpractice() {
	delete[]Dynamicitems;
}

template<class Arraytype>
void Stackpractice<Arraytype>::push(Arraytype pItems){
	if (isFull()) {
		std::cout << "Bhi jan or space khali nhi ha" << endl;
		exit(1);
	}
	topvalue++;
	Dynamicitems[topvalue] = pItems;
}

template<class Arraytype>
void Stackpractice<Arraytype>::pop(Arraytype&poItems) {
	if (isEmpty()) {
		std::cout << "Bhi beach my kuch ha hi nhi" << endl;
		exit(1);
	}
	Dynamicitems[topvalue] = poItems;
	topvalue--;
}
