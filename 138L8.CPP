/**
Defining a member function with default arguments values
*/
#include<iostream>
using namespace std;

class Test {
private:
	// No Members
public:
	void fun(int=1, int=2);	
};
void Test::fun(int x, int y) {
	cout<<"x="<<x<<" y="<<y<<endl;
}

int main() {
	Test t;
	t.fun(); // x=1 y=2
	t.fun(10); //x=10 y=2
	t.fun(10, 20); //x=10 y=20
	return 0;
}
