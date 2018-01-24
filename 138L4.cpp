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
	}
};

int main() {
	Employee e;
	e.set_employee_details();
	cout<<endl;
	e.get_employee_details();
	return 0;
}
