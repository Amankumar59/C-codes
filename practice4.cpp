#include<iostream>
#include<string.h>
using namespace std;
int size;
class bill
{
		protected:
			int items[10];
			float price[10];
		public:
			bill(int items[],float price[],int size);
			virtual void total()=0;
			virtual void display()=0;
};
bill::bill(int items[],float price[],int size){
//    this.size=size;
for(int i=0;i<size;i++){
    this->items[i]=items[i];
    this->price[i]=price[i];
    }
}

class Cheque:public bill{
 protected:
    int ch_no;
    char b_name[20];
    int  t=0;
public:
Cheque(int item[],float p[],int chek_no,char bank_name[],int s):bill(item,p,s) {
ch_no=chek_no;
strcpy(b_name,bank_name);
size=s;
}

void total(){
    for(int i=0;i<size;i++){
        t=t+price[i];
    }
}
void display(){
  cout<< " payed by cheque"<<endl;
cout<<"Cheque number:"<<ch_no<<endl;
cout<<"Name of Bank:" <<b_name<<endl;
cout<<"Total:"<<t;

}
};

class Cash:public bill{
 public:
     int t=0;
     Cash(int item[],float price[],int s):bill(item,price,s){
         size=s;
     }
 void total(){
     for(int i=0;i<size;i++){
        t=t+price[i];
    }
 }
 void display(){
cout<<" payed by cash"<<endl;
cout<<"total:"<<t;
 }
 };

int main()
{
	int s;
	cin>>s;
	int item[s];
	for (int i=0;i<s;i++)
		cin>>item[i];
	float price[s];
	for(int i=0;i<s;i++)
		cin>>price[i];
	int option;
	cin>>option;
	if(option==1)
	{
		int c_no;
		char n[30];
		cin>>c_no;
		cin.ignore();
		cin.getline(n,30);
		Cheque Ch(item,price,c_no,n,s);
		Ch.total();
		Ch.display();
	}
	else if(option==2)
	{
		Cash C(item,price,s);
		C.total();
		C.display();
	}
    return 0;
}
