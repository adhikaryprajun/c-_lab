/**
Create a Book Management and Billing System
*/
#include<iostream>
using namespace std;

const int TITLE_SIZE=100;

class Books {
private:
	int id;
	char title[TITLE_SIZE];
	float price;
	float cost(int);
public:
	void set();
	void get();
	float buy();
};

float Books::cost(int units) {
	return (price*units);
}

void Books::set() {
	cout<<"**************************************"<<endl;
	cout<<"Enter Book Details"<<endl;
	cout<<"**************************************"<<endl;
	cout<<"Enter ID:: "<<endl;
	cin>>id;
	cout<<"Enter Title:: "<<endl;
	cin>>title;
	cout<<"Enter Price:: "<<endl;
	cin>>price;
	cout<<"**************************************"<<endl;
}

void Books::get() {
	cout<<"**************************************"<<endl;
	cout<<"Book Details"<<endl;
	cout<<"**************************************"<<endl;
	cout<<"ID::            "<<id<<endl;
	cout<<"Title::         "<<title<<endl;
	cout<<"Price::         Rs."<<price<<endl;
	cout<<"**************************************"<<endl;
}

float Books::buy() {
	int units;
	cout<<"Enter the no of books to buy:: ";
	cin>>units;
	return cost(units);
}

int main() {
	Books b;
	b.set();
	cout<<endl;
	b.get();
	cout<<endl;
	cout<<"Total Cost:: Rs. "<<b.buy()<<endl;
	return 0;
}
