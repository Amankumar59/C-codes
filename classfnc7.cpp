//write a class that has array of integers as data members and read function,display function find largest,smallest,sum,mean 
#include<iostream>
#include<math.h>
using namespace std;
class array
{
	private:
		int a[100];
		int n;
		float area;
		public:
		void setdata();
		void getdata();
};
void triangle::setdata()
{
	cin>>a;
	cin>>b;
	cin>>c;
}
void array::getdata()
{
	float s;
	s=(a+b+c)/3;
	cout<<"area= ";
	area=s*(s-a)*(s-b)*(s-c);
	cout<<area;
}
int main()
{
	array b;
	cout<<"Enter 3 sides of triangle"<<endl;
	b.setdata();
	b.getdata();
}
	
