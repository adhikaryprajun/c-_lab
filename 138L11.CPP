#include<iostream>
#include<string.h>
using namespace std;

class StringUtils {
private:
	char s1[20], s2[20];
public:
	void setStrings();
	friend int compare(StringUtils);
};

void StringUtils::setStrings() {
	cout<<"Enter First String::"<<endl;	
	cin>>s1;
	cout<<"Enter Second String::"<<endl;	
	cin>>s2;
}

int compare(StringUtils s) {
	cout<<"Comparing strings "<<s.s1<<" & "<<s.s2<<endl;
	return strcmp(s.s1, s.s2);
}

int main() {
	StringUtils su;
	su.setStrings();
	cout<<compare(su)<<endl;
	return 0;
}
