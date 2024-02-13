#include<iostream>
using namespace std;
class A{
	protected:
		int a;
		public:
			void input(){
				cout<<"enter the value of a "<<endl;
				cin>>a;
			}
};
class B{
	protected:
		int b;
		public:
			void getdata(){
			cout<<"enter the value of b "<<endl;
			cin>>b;
		}
};
class C : public A , public B{
	public:
		void putdata(){
		cout<<"Addition "<<a+b<<endl;
		}
};
int main(){
	C aa;
	aa.input();
	aa.getdata();
	aa.putdata();
	return 0;
	
	
}
