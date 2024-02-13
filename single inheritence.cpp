#include<iostream>
using namespace std;
class A{
	protected:
		int x;
		public:
			void input(){
				cout<<"enter the number "<<endl; 
				cin>>x;
			}
};
class B : public A{
	int y;
	public:
		void getdata(){
			cout<<"enter the number "<<endl;
			cin>>y;
		}
		void putdata(){
			cout<<"Addition "<<x+y<<endl;
		}
};
int main(){
	B aa;
	aa.input();
	aa.getdata();
	aa.putdata();
	return 0;
}

