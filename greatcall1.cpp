#include<iostream>
using namespace std;
void great(int a[],int);
int main()
{
	int a[100],n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	great(a,n);
}
void great(int a[100],int n)
{
	int g=-999,i;
	for(i=0;i<n;i++)
	{
		if(a[i]>g)
		{
			g=a[i];
		}
	}
	cout<<g;
}
