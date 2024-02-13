#include<iostream>
#include<string>
using namespace std;
class binary{
	public:
	string s;
	void read(void);
	void chk_binary(void);
};
void binary :: read(void){
	cout<<"enter the value"<<endl;
	cin>>s;
}
void binary :: chk_binary(void){
	for(int i=0;i<s.length();i++){
		if(s.at(i)!='1' && s.at(i)!='0'){
			cout<<"inncorrect nalue"<<endl;
			//exit (0);
		}
		else{
			cout<<"correct"<<endl;
		}
	}
}
int main(){
	binary b;
	b.read();
	b.chk_binary();
	return 0;
}
