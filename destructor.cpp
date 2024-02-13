		#include<iostream>
using namespace std;
int count=0;
class demo{
	public:
		demo(){
			count++;
		cout<<"No of object created "<<count<<endl;
		}
		~demo(){
			count--;
			cout<<"no. of object destroyed "<<count<<endl;
		}
};
int main(){
	demo aa,bb,cc;
	{
		demo dd;
	}
	return 0;
}

