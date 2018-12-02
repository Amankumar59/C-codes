#include<iostream>
using namespace std;
int sum(int,int);
int main()
{
	cout<<"Enter 2 integers\n";
	int x,y;
	cin>>x>>y;
	x=sum(x,y);
	cout<<"Sum is "<<x<<"\n";
	x=sum('a','b');
	cout<<"Sum is "<<x;
}
int sum(int x,int y)
{
	return x+y;
}
