//wap to calculate simple interst.Assume customer is a senior citizen he is being offered 12% rate of interst.for others rate of interst is 10%.
#include<iostream>
using namespace std;
void si(float ,int ,int);
int main()
{
	int n,p,t;
	float r;
	cout<<("if senior citizen enter 0 else enter 1\n");
	cin>>n;
	cout<<("Enter principle and time\n");
	cin>>p>>t;
	if(n==0)
	{
		r=0.10;
	}
	else
	{
		r=0.12;
	}
	si(r,p,t);
}
void si(float r,int p,int t)
{
	float i;
	i=p*r*t;
	cout<<("SI is ")<<i;
}
