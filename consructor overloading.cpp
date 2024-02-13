#include<iostream>
using namespace std;
class demo{
	int a;
	public:
		demo() //default constructor
		{
			a=10;
		}
		demo(int x) //parameterized constructor
		{
			a=10;
		}
		demo(demo &z) // copy constructor
		{
			a=z.a;
		}
		void putdata(){
			cout<<"Addition= "<<a<<endl;
		}
};
int main(){
	demo aa;
	demo bb(20);
	demo cc=bb;
	aa.putdata();
	bb.putdata();
	cc.putdata();
	return 0;
}
