#include<iostream>
using namespace std;
inline int square(int a){
	return a*a;
}
inline int cube(int b){
	return b*b*b;
}
int main(){
	cout<<"square of 5= "<<square(5)<<endl;
	cout<<"cube of 8= "<<cube(8)<<endl;
	return 0;
}
