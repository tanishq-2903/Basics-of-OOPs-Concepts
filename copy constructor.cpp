#include<iostream>
using namespace std;
class demo{
	int a,b;
	public:
		demo(){
			cout<<"enter the value of a and b "<<endl;
			cin>>a>>b;
		}
		demo(demo &z){
			a=z.a;
			b=z.b;
		}
		void putdata(){
			cout<<"a= "<<a<<"b= "<<b<<endl;
		}
};
int main(){
	demo aa;
	demo bb(aa);
	demo cc=bb;
	aa.putdata();
	bb.putdata();
	cc.putdata();
	return 0;
}
