#include<iostream>
using namespace std;
class addition{
	int a,b;
	public:
		void getdata();
		void putdata();
};
void addition :: getdata(){
	cout<<"enter the value of and b "<<endl;
	cin>>a>>b;
}
void addition :: putdata(){
	cout<<"Addition = "<<a+b<<endl;
}
int main(){
addition aa;
aa.getdata();
aa.putdata();
return 0;
}
