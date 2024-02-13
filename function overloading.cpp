#include<iostream>
using namespace std;

int sum(int a,int b){
	cout<<"using function with 2 arguements"<<endl;
	return a+b;
}
int sum(int a,int b,int c){
	cout<<"using function with 3 arguements"<<endl;
	return a+b+c;
}
int main(){
	cout<<"sum of 3,6 is "<<sum(3,6)<<endl;
	cout<<"sum of 3,7,6 is "<<sum(3,7,6)<<endl;
	return 0;
}
