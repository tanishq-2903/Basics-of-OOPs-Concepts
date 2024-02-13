#include<iostream>
using namespace std;
void add(int,int);

void add(int,int,int);
void add(int,double);
int main(){
add(3,4);
add(3,3.22);
add(3,4,5);	
return 0;
}
void add(int a,int b){
	cout<<"Addition of 3,4 = "<<a+b<<endl;
}
void add(int a, double b){
	cout<<"Addition of 3,3.22 = "<<a+b<<endl;
}
void add(int a,int b,int c){
	cout<<"Addition of 3,4,5 = "<<a+b+c<<endl;
}
