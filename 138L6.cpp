/**
Program to convert 123 to One Hundred and Twenty Three
*/
#include<iostream>
#include<string.h>
using namespace std;

class NumberToString {
private:
	std::string ones(int i) {
		switch(i) {
			case 1:
				return "One ";
			case 2:
				return "Two ";
			case 3:
				return "Three ";
			case 4:
				return "Four ";
			case 5:
				return "Five ";
			case 6:
				return "Six ";
			case 7:
				return "Seven ";
			case 8:
				return "Eight ";
			case 9:
				return "Nine ";
			case 0:
				return " ";
		}
	}

	std::string tens(int i) {
		switch(i) {
			case 1:
				return "Ten ";
			case 2:
				return "Twenty ";
			case 3:
				return "Thirty ";
			case 4:
				return "Forty ";
			case 5:
				return "Fifty ";
			case 6:
				return "Sixty ";
			case 7:
				return "Seventy ";
			case 8:
				return "Eighty ";
			case 9:
				return "Ninety ";
			case 0:
				return ;
		}
	}

	std::string hundred(int i) {
		char *o = ones(i);
		strcat(o, "Hundred");
		return o;
	}
public:
	void toString(int number) {
		cout<<ones(number)<<endl;		
		cout<<tens(number)<<endl;		
		cout<<hundred(number)<<endl;		
	}
};

int main() {
	NumberToString nts;
	for(int i=0;i<10;i++) {
		cout<<nts.toString(i)<<endl;
	}
	return 0;
}
