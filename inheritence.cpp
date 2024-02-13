#include<iostream>
using namespace std;
class employee{
	public:
	int id;
	public:
	float salary;
	employee(int inpid){
		id=inpid;
		salary=34.0;
		}
		employee(){}
};
class programmer : public employee{
	public:
		programmer(int inpid){
			id=inpid;
		}
		int  languagecode=9;
		void getdata(){
			cout<<id<<endl;
		}
};
int main(){
employee harry(1),rohan(2);
cout<<harry.salary<<endl;
cout<<rohan.salary<<endl;
programmer skilledf(10215);
cout<<skilledf.languagecode<<endl;
skilledf.getdata();
cout<<skilledf.id;
return 0;
}
