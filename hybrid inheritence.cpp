#include<iostream>
using namespace std;
class A{
	public:
		void show(){
			cout<<"inside the class A"<<endl;
		}
};
class B :public A{
	public:
		void display(){
		cout<<"Inside class B "<<endl;
		}
};
class D{
	public:
		void putdata(){
			cout<<"Inside class D"<<endl;
		}
};
class C:public B,public D
{
	public:
		void print(){
			cout<<"Inside class C"<<endl;
		}
};
int main(){
	C aa;
	aa.show();
	aa.display();
	aa.putdata();
	aa.print();
	return 0;
}
