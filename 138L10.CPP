/**
Matrix Addition using static and friend members
*/
#include<iostream>
using namespace std;

class Matrix {
private:
	static int row, col;
	int m[10][10];
public:
	static void setRC(int=10, int=10);
	static void getRC();
	void read();
	void print();
	friend Matrix add(Matrix, Matrix);
};

int Matrix::row=0;
int Matrix::col=0;

void Matrix::setRC(int row, int col) {
	Matrix::row=row;
	Matrix::col=col;
}

void Matrix::getRC() {
	cout<<"Row="<<Matrix::row<<" Col="<<Matrix::col<<endl;
}

void Matrix::read() {
	cout<<"Enter the Matrix Elements::"<<endl;
	for(int i=0;i<Matrix::row;i++) {
		for(int j=0;j<Matrix::col;j++) {
			cin>>m[i][j];
		}
	}
}

void Matrix::print() {
	cout<<"Printing the Matrix Element::"<<endl;
	for(int i=0;i<Matrix::row;i++) {
		for(int j=0;j<Matrix::col;j++) {
			cout<<m[i][j]<<" ";
		}	
		cout<<endl;
	}
}

Matrix add(Matrix m1, Matrix m2) {
	cout<<"Adding..."<<endl;
	Matrix sum;
	for(int i=0;i<Matrix::row;i++) {
		for(int j=0;j<Matrix::col;j++) {
			cout<<"::"<<i<<"x"<<j<<endl;
			sum.m[i][j]=m1.m[i][j] + m2.m[i][j];
		}
	}
	return sum;
}

int main() {
	Matrix m1, m2, sum;
	int row, col;
	cout<<"Enter Rows and Column::"<<endl;
	cin>>row>>col;
	Matrix::setRC(row, col);	

	m1.read();
	m1.print();	

	m2.read();
	m2.print();

	sum=add(m1, m2);
	sum.print();	
	return 0;
}
