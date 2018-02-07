/**
Program to add two complex numbers
*/
#include<iostream>
using namespace std;

class Complex {
private:
	int real, imaginary;
public:
	void read();
	void print();
	friend Complex add(Complex, Complex);
};

void Complex::read() {
	cout<<"------------------------------------"<<endl;
	cout<<"Reading Complex Number"<<endl;
	cout<<"------------------------------------"<<endl;
	cout<<"Real Part	:";
	cin>>real;
	cout<<"Imaginary Part	:";
	cin>>imaginary;
	cout<<"------------------------------------"<<endl;
}

void Complex::print() {
	cout<<"Complex::"<<real<<"+i"<<imaginary<<endl;
}

Complex add(Complex c1, Complex c2) {
	Complex c3;
	c3.real = c1.real + c2.real;
	c3.imaginary = c1.imaginary + c2.imaginary; 
	return c3;
}

int main() {
	Complex c1, c2, c3;
	c1.read();
	c2.read();
	c3 = add(c1, c2);
	c3.print();
	return 0;
}
