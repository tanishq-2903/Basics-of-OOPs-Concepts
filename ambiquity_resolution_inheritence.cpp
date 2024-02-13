#include<iostream>
using namespace std;
class A{
	public:
		int x;
	public:
		void input(){
		cout<<"enter the value of x"<<endl;
		cin>>x;
	}
	void output(){
		cout<<"x="<<x<<endl;
	}
};
class B{
protected:
	int y;
	public:
	void input(){
	cout<<"enter the value of y"<<endl;
	cin>>y;
}
void display(){
	cout<<"y= "<<y<<endl;
}
};
class C: public A,public B{
	int z;
	public:
	void getput(){
		cout<<"enter the value of z "<<endl;
		cin>>z;
		A ::input();
		B ::input();
	}
	void putdata(){
		cout<<"z= "<<z<<endl;
	}
};
int main(){
	C aa;
	aa.getput();
	aa.output();
	aa.display();
	aa.putdata();
	return 0;
}
