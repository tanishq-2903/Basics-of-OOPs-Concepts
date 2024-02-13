#include<iostream>
using namespace std;
class A{
	public:
		void display(){
			cout<<"This is the base class"<<endl;
		}
};
class B: public A{
	public:
		void display(){
		cout<<"This is the derived class"<<endl;
	 
	}
};
int main(){
	B aa;
	aa.display();
	aa.	A :: display();
	return 0;
}
