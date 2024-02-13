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
		cout<<"the id of the employee is "<<id<<" the employee number is  "<<count<<endl;
	}
static void getcount(void){
	cout<<"the value of count is "<< count<<endl;
}
};
int employee :: count;
int main(){
	//count is the static data member of the class employee
	employee harry,rohan,lovish;
	harry.setdata();
	harry.getdata();
	employee :: getcount();
	
	rohan.setdata();
	rohan.getdata();
	employee :: getcount();
	lovish.setdata();
	lovish.getdata();
	employee :: getcount();
	return 0;
} 
