#include<iostream>
using namespace std;
class hero{
		public:
		int health;
		public:
		char level;
		void print(){
			cout<<level<<endl;
		}
		int gethealth(int h){
			health=h;
			char getlevel(char ch){
				level=ch;
			}
		}
};
int main(){
	hero ramesh;
	ramesh.health=66;
	ramesh.level='A';
	cout<<"health is"<<ramesh.health<<endl;
	cout<<"level is"<<ramesh.level<<endl;
	return 0;
}
