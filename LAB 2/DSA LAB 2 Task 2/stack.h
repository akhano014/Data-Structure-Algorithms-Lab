#pragma once
template<class Arraytype>
class Stackpractice {
private:
	int topvalue;
	int maxi_size;
	Arraytype* Dynamicitems;
public:
	Stackpractice();
	Stackpractice(int maxi);
	~Stackpractice();
	bool isEmpty() const;
	bool isFull()const;
	void push(Arraytype pItems);
	void pop(Arraytype& poItems);
};