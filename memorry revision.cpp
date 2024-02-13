#include<iostream>
using namespace std;
class shop{
	int itemprice[10];
	int itemId[10];
	int counter;
	public:
	void initcounter(void){
		counter=0;
	}
	void setprice(void);
	void displayprice(void);
};

void shop :: setprice(void){
	cout<<"enter the itemID "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"enter the item price "<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop :: displayprice(void){
	for(int i=0; i<counter; i++){
		cout<<"the item id  of"<<itemId[i]<<" price is "<<itemprice[i]<<endl;
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
