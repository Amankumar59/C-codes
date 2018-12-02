//calculate sum of even positioned elements and odd positioned elements.
#include<iostream>
using namespace std;
int main()
{
	int a[100],i,j,n,sum=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i=i+2)
	{
		sum=sum+a[i];
	}
	cout<<sum<<"\n";
	sum=0;
	for(i=1;i<n;i=i+2)
	{
		sum=sum+a[i];
	}
	cout<<sum;
	
}
