#include<iostream>
using namespace std;
class demo{
	int a,b;
	public:
		void getdata();
		friend int sum(demo);
};
void demo :: getdata(){
	cout<<"enter the value of a and b "<<endl;
	cin>>a>>b;
}
int sum(demo aa){
	return(aa.a+aa.b);
}
int main(){
	demo aa;
	aa.getdata();
	cout<<"Addition= "<<sum(aa)<<endl;
	return 0;
}
