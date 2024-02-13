#include<iostream>
using namespace std;
class shop{
	public:
	int itemId[100];
	int itemprice[100];
	int counter;
	void initcounter(void){
		counter=0;
	}
	void setprice(void);
	void displayprice(void);
	
};
void shop :: setprice(void){
	cout<<"enter the ID no "<<counter<<endl;
	cin>>itemId[counter];
	cout<<"enter the price"<<endl;
	cin>>itemprice[counter];
	counter++;
}
void shop :: displayprice(void){
	for(int i=0;i<counter;i++)
	{
		cout<<"the item of "<<itemId[i]<<" price is "<<itemprice[i]<<endl;
	}
}
int main(){
	shop dukaan;
	dukaan.initcounter();
	dukaan.setprice();
	dukaan.setprice();
	dukaan.displayprice();
	return 0;
}
