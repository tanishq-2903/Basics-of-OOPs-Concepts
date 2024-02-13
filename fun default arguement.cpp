#include<iostream>
using namespace std;
void add(int,int);
int main(){
	int a;
	int b;
	cout<<"enter the value of a and b "<<endl;
	cin>>a>>b;
	add(a,b);
	return 0;
}
void add(int a,int b){
int c;
c=a+b;
cout<<"Addition= "<<c<<endl;
}
