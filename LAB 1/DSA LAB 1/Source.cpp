#include<iostream>
#include<string>
using namespace std;
class House {
private:
	string owner;
	string address;
	int bedrooms;
	float price;
public:
	House() {
		owner = " ";
		address = " ";
		bedrooms = 0;
		price = 0.0;
	}
	House(string ow,string add,int bed,float pri) {
		owner =ow;
		address = add;
		bedrooms = bed;
		price = pri;
	}

	void inputdata() {
		cin.ignore();
		cout << "Enter the Owner Name: ";
		getline(cin,owner);
		cout << endl;
		cout << "Enter the Address of House: ";
		getline(cin,address);
		cout << endl;
		cout << "Enter the Number of Bedrooms: ";
		cin >> bedrooms;
		cout << endl;
		cout << "Enter the Price: ";
		cin >> price;
		cout << endl;
	}
	void displaydata() {
		cout << "Owner Name: " << owner << endl;
		cout << "House Address: " << address << endl;
		cout << "Total Bedrooms: " << bedrooms << endl;
		cout << "Price: " << price << endl;
	}
};
int main() {
	House h1[100];
	char choice;
	int i = 0;
	do {
		cout << "Enter Data for House: " << i + 1 << endl;
		h1[i].inputdata();
		i++;

		cout << "Do you want to continue ? (Y/N): ";
		cin >> choice;
	} while ((choice == 'Y' || choice =='y') && i<100);
	

	cout << "\n*************** House Details ***************\n";

	for (int j = 0;j < i;j++) {
		cout << "Detalis of House: " << j + 1 << endl;
		h1[i].displaydata();
	}

}