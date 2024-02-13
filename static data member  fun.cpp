#include<iostream>
using namespace std;
class demo{
	int x,y;
	static int z;
	public:
		void getdata(int a,int b){
			x=a;
			y=b;
			z=z+1;
		}
		void putdata(){
			cout<<"x= "<<x<<"\ty= "<<y<<"\tz= "<<z<<endl;
		}
};
int demo :: z;
int main(){
	demo aa,bb;
	aa.getdata(10,20);
	aa.putdata();
	bb.getdata(30,100);
	bb.putdata();
	return 0;
}
