#include<iostream>
using namespace std;
class employee{
	int id;
	static int count;
	public:
	void setdata(void){
		cout<<"enter the id"<<endl;
		cin>>id;
		count++;
	}
	void getdata(void){
		cout<<"the id of the employee is "<<id<<" the employee number is"<<count<<endl;
	}
};
int employee :: count=1000;
int main(){
	//count is the ststic data member of the class employee
	employee harry,rohan,lovish;
	harry.setdata();
	harry.getdata();
	
	rohan.setdata();
	rohan.getdata();
	
	lovish.setdata();
	lovish.getdata();
	
	return 0;
} 
