#include<iostream>
using namespace std;
class A{
	public:
		void show(){
			cout<<"this base class"<<endl;
		}
};
class B : public A{
	public:
		void show(){
			cout<<"this is derived class"<<endl;
		}
};
int main(){
	A*ptr;
	A aa;
	ptr=&aa;
	ptr->show;
	return 0;
	
}
