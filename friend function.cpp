#include<iostream>
using namespace std;
class B;
class A{
	int a;
	public:
		void input(){
			cout<<"enter the value of a "<<endl;
			cin>>a;
		}
		friend void max(A,B);
};
class B{
	int b;
	public:
		void getdata(){
			cout<<"enter the value of b "<<endl;
			cin>>b;
		}
	friend void max(A,B);
};
void max(A aa,B bb){
	if(aa.a<bb.b){
		cout<<"MAX= "<<bb.b<<endl;
	}
	else{
		cout<<"MAX= "<<aa.a<<endl;
	}
}
int main(){
	A aa;
	B bb;
	 aa.input();
	 bb.getdata();
	max(aa,bb);
	return 0;
	
	
	
}
