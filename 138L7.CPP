/**
Using static variable declaration inside a class
*/
#include<iostream>
using namespace std;

class Test {
private:
	static int a;
public:
	void get();
};
int Test::a;
void Test::get() {
	cout<<a<<endl;
}

int main() {
	Test t;
	t.get();
	return 0;
}
