#include<iostream>
using namespace std;
class A{
	public:
		void message(){
		cout<<"welcome to inheritence "<<endl;
		}
};
class B :public A{
	public:
		void display(){
		
		cout<<"inside the class B"<<endl;
		}
};
class C :public A{
	public:
		void putdata(){
			cout<<"Inside the Class C"<<endl;
		}
};
int main(){
	B aa;
	C bb;
	aa.display();
	aa.message();
	bb.putdata();
	bb.message();
	
	return 0;
}
