#include<iostream>
using namespace std;
class demo{
	int a,b;
	public:
	demo(){
	a=10;
	b=20;
	}
	void putdata(){
		cout<<"a= "<<a<<"\tb= "<<b<<endl;
	}
};
int main(){
	demo aa;
	aa.putdata();
	return 0;
}
