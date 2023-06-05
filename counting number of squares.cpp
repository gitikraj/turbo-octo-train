#include<iostream>
using namespace std;

int counting_squares(int a,int b);

int main(){
	int rows,columns;
	cout<<"Entre total number of ROWS :"<<endl;
	cin>>rows;
	cout<<"Entre total number of COLUMNS :"<<endl;
	cin>>columns;
	int squares=0;
	while(rows > 0 && columns > 0){
		squares = squares + counting_squares(rows,columns);
		rows = rows - 1;
		columns = columns - 1;
	}
	cout<<"Total number of squares are :"<<squares<<endl;
	return 0;
}
int counting_squares(int a,int b){
	int n;
	n=a*b;
	return n;
}
