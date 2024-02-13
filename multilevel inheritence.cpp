#include<iostream>
using namespace std;
class A{
	protected:
		int roll;
		public:
			void getroll(){
				cout<<"enter the roll number "<<endl;
				cin>>roll;
			}
			void putroll(){
				cout<<"Roll No "<<roll<<endl;
			}
};
class B : public A{
	protected:
		int sub1,sub2;
		public:
			void getmarks(){
				cout<<"marks: "<<endl;
				cin>>sub1>>sub2;
			}
			void putmarks(){
				cout<<"marks 1: "<<sub1<<endl<<"marks 2: "<<sub2<<endl;
			}
};
class C : public B{
	int sptm;
	public:
		void getsptm(){
			cout<<"enter the numbers of sptm "<<endl;
			cin>>sptm;
		}
		void totalMarks(){
			putroll();
			putmarks();
			cout<<"sports marks "<<sptm<<endl;
			cout<<"Total Marks "<<sptm+sub1+sub2<<endl;
		}
};
int main(){
	C aa;
	aa.getroll();
	aa.getmarks();
	aa.getsptm();
	aa.totalMarks();
	return 0;
	
}
