#include<iostream>
using namespace std;
class employee{
	int a;
	int b;
	public:
	void getdata();
	void putdata();
};
void employee :: getdata(){
cout<<"enter the two numbers "<<endl;
cin>>a>>b;
}
void employee :: putdata(){
	cout<<"\n a= "<<a<<"\t b= "<<b<<endl;
}
int main(){
	employee aa[5];
	for(int i=0;i<5;i++){
		aa[i].getdata();
}
		for(int i=0;i<5;i++){
		aa[i].putdata();
	}
	return 0;
}
