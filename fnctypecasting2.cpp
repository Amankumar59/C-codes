#include<iostream>
using namespace std;
int sum(int,int);
int main()
{
	cout<<"Enter 2 integers\n";
	int x,y;
	char c,d;
	cin>>x>>y;
	x=sum(x,y);
	cout<<"Sum is "<<x<<"\n";
	cin>>c>>d;
	x=sum(c,d);
	cout<<"Sum is "<<x;
}
int sum(int x,int y)
{
	return x+y;
}
