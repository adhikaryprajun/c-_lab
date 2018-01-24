#include<iostream>
#include<string.h>
using namespace std;

class Student {
private: 
	char name[20];
	char usn[20];

public:
	void setName(char n[20]) {
		strcpy(name,n);	
	}
	void setUsn(char u[20]) {
		strcpy(usn,u);	
	}
	char* getName() {
		return name;	
	}
	char* getUsn() {
		return usn;	
	}
	void display() {
		cout<<"Student Details"<< endl;
		cout<<"Name : "<<getName()<<endl;
		cout<<"USN  : "<<getUsn()<<endl;	
	}
	
};

int main() {
	char name[20], usn[20];
	Student s;
	
	cout<<"Enter Name:"<<endl;
	cin>>name;
	cout<<"Enter USN:"<<endl;
	cin>>usn;

	s.setName(name);
	s.setUsn(usn);

	s.display();
	return 0;
}
