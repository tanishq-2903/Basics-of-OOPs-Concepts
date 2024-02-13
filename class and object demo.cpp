#include<iostream>
using namespace std;
class addition {
	int a,b;
	public:
		void getdata(){
			cout<<"enter the value of a and b"<<endl;
			cin>>a>>b;
		}
		void putdata(){
			cout<<"Addition = "<<a+b<<endl;
		}
};
int main(){
	addition aa;
	aa.getdata();
	aa.putdata();
	return 0;
}
