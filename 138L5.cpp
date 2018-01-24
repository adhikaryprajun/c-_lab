/**
Program to demo the use of various string.h functions
*/
#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char str[255]="Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.";

	char s[255] = "=> ";
	cout<<strcat(s, str)<<endl; // Concatenation of two string

	cout<<endl;
	cout<<strchr(str, 'i')<<endl; // Searches for the first occurance of the character and returns string pointer
	
	cout<<endl;
	cout<<strlen(str)<<endl; // Returns the length of the string

	cout<<endl;
	cout<<strcmp(s, str)<<endl; // Compares string if same returns 0

	cout<<endl;
	strcpy(s, str); // Copy str to s
	cout<<s<<endl;
	
	cout<<endl;
	cout<<strcmp(s, str)<<endl; // Returns 0 Since both string are the same
	
	return 0;
}
