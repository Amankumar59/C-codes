#include<iostream>
using namespace std;
int main()
{
	int a[100],i,j,n,temp,b[100];
	cout<<("Enter no of elements\n");
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[i]==a[j])
			{
				
			}
		}
	}

	a[n-1]=-1;
	cout<<"elements are\n";
	for(i=0;i<n;i++)
	cout<<b[i]<<" "<<a[i]<<"\n";   
}
