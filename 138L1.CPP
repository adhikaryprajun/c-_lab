#include<iostream>
using namespace std;

void sta();
void nsta();

int main() {
	for(int i=0;i<5;i++) {
		sta();
		nsta();
	}
	return 0;
}

void sta() {
	static int s=1;
	s++;
	cout<<"s="<<s<<endl;
}

void nsta() {
	auto int ns=1;
	ns++;
	cout<<"ns="<<ns<<endl;
}

