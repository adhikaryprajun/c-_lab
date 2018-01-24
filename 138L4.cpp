/**
Program to manage salary of Employee
*/
#include<iostream>
using namespace std;

class Employee {
private:
	int employee_no;
	char employee_name[20];
	int basic_salary;
	int all_allowances;
	int income_tax;
	int net_salary;
	
	void calculate_net_salary() {
		int gross_salary = 0;
		all_allowances = 1.23 * basic_salary; // 123% of basic_salary
		gross_salary = basic_salary + all_allowances;
		income_tax = 0.3 * gross_salary; // 30% of gross_salary 
		net_salary = ((basic_salary + all_allowances) - income_tax);
	}
public:
	void set_employee_details() {
		cout<<"------------------------------------"<<endl;
		cout<<"Enter Employee Details:"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"No	: ";
		cin>>employee_no;
		cout<<"Name	: ";
		cin>>employee_name;
		cout<<"Salary	: "; 
		cin>>basic_salary;	
		cout<<"------------------------------------"<<endl;
		calculate_net_salary();
	}

	void get_employee_details() {
		cout<<"------------------------------------"<<endl;
		cout<<"Employee Details:"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"No		: "<<employee_no<<endl;
		cout<<"Name		: "<<employee_name<<endl;
		cout<<"Salary		: "<<basic_salary<<endl;
		cout<<"Allowances	: "<<all_allowances<<endl;
		cout<<"Income Tax	: "<<income_tax<<endl;
		cout<<"Net Salary	: "<<net_salary<<endl;
		cout<<"------------------------------------"<<endl;
	}
};

int main() {

	/*
	Employee e;
	e.set_employee_details();
	cout<<endl;
	e.get_employee_details();
	*/

	int no_of_employee=0;
	Employee e[10];

	cout<<"Enter no of employees:"<<endl;
	cin>>no_of_employee;

	for(int i=0;i<no_of_employee;i++) {
		e[i].set_employee_details();		
		cout<<endl;
		e[i].get_employee_details();		
		cout<<endl<<endl;

	}	
	return 0;
}
