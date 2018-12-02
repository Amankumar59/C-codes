//wap to enter the code and price of items.user must feed the quantity in which he wants a product.the program must calculate and display the final bill/
#include<iostream>
using namespace std;
class store
{
	private:
		int item_code[10];
		float price[10];
		public:
			void get_data();
			void display_data();
			void calculate_bill(int quant[]);
};
void store::get_data()
{
	static int i=0;
	cout<<"Enter item code,price and quantiy"<<endl;
	cin>>item_code[i];
	cin>>price[i];	
	i++;	
}
void store::display_data()
{
	
}
void store::calculate_bill(int quant[])
{
	float sum=0;
	int i=0;
	while(quant[i]!='\0')
	{
		sum=sum+(price[i]*quant[i]);
		i++;
	}
	cout<<sum;
}
int main()
{
	store a;
	int price[10],code[10],quantity[100],n,i;
	cout<<"Enter n"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		a.get_data();
		cin>>quantity[i];
	}
	a.calculate_bill(quantity);
}
