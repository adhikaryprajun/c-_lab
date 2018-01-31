/**
Create a Book Management and Billing System
*/
#include<iostream>
using namespace std;

const int TITLE_SIZE=100;
const int BOOK_NO=3;

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
	cout<<"No of Books:: ";
	cin>>units;
	return cost(units);
}

int main() {	
	int id, quant;
	float totalCost=0;
	Books b[BOOK_NO];
	for(int i=0;i<BOOK_NO;i++) {		
		b[i].set();
	}
	cout<<endl;
	for(int i=0;i<BOOK_NO;i++) {		
		b[i].get();
	}
	cout<<endl<<endl<<endl;
	cout<<"How many do you want to purchase?"<<endl;
	cin>>quant;
	for(int i=0;i<quant;i++) {	
		cout<<"Enter Book ID::"<<endl;
		cin>>id;
		b[id].get();
		totalCost+=b[id].buy();
	}
	cout<<"Total Cost:: Rs. "<<totalCost<<endl;
	return 0;
}
