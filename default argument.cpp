#include<iostream>
using namespace std;
void add(int a=10,int b=5);
int main(){
	add();
	add(20,30);
	add(40);
	return 0;
}
void add(int a,int b){
	cout<<"Addition "<<a+b<<endl;
}
