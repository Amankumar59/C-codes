#include<iostream>
using namespace std;
void great(int a[],int &);
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
void great(int a[100],int &n)
{
	int s=999,i,g=-999,x,temp,l;
	for(i=0;i<n;i++)
	{
		if(a[i]<s)
		{
			s=a[i];
			x=i;
			
		}
		if(a[i]>g)
		{
			g=a[i];
			l=i;
		}
	}
	temp=a[x];
	a[x]=a[l];
	a[l]=temp;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\n";
	}
}
