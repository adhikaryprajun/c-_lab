/**
Using friend function in class with class object as an argument
*/
#include<iostream>
using namespace std;

class Test {
private:
	int a,b;
public:	
	void fun();
	friend void ffun(Test);
};

void Test::fun() {
	a=5;
	b=6;
	cout<<"a="<<a<<" b="<<b<<endl;
}

// void Test::ffun(Test t) { // ERROR DEFINITION
void ffun(Test t) {
	cout<<"a="<<t.a<<" b="<<t.b<<endl;
}

int main() {
	Test t;
	t.fun();
	// t.ffun(); // ERROR CALLING
	ffun(t);
	return 0;
}
