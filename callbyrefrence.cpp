/*call by reference method
value must be assigned from right to left */
#include<iostream>
using namespace std;
void swap(int &,int &);          
int main()
{
	int a,b,c;
	cin>>a>>b;
	cout<<"Before swapping a="<<a<<" b="<<b<<"\n";
	swap(a,b);
	cout<<"After swapping a="<<a<<" b="<<b<<"\n";
	return 0;
}
void swap(int &x,int &y)
{
	int z;
	z=x;
	x=y;
	y=z;
	cout<<"x="<<x<<" y="<<y<<"\n";
}
