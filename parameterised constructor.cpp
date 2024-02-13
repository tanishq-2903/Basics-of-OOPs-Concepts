#include<iostream>
using namespace std;
class demo{
	int a,b;
	public:
	demo(int m,int n){
		a=m;
		b=n;
	}
	void getdata(){
		cout<<"enter the value of m and n "<<endl;
		cin>>a>>b;
	}
		void putdata()
		{
			cout<<"additon ="<<a+b;
		}
};
int main(){
	demo aa(10,20);
	aa.getdata();
     aa.putdata();
	return 0;
}
