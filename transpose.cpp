#include<iostream>
using namespace std;
int main()
{
	int m,n,a[100][100],i,j,b[100][100];
	cout<<("Enter no of rows and columns\n");
	cin>>m>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<a[i][j]<<(" ");
		}
		cout<<("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	cout<<("Transpose is \n");
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<b[i][j]<<(" ");
		}
		cout<<("\n");
	}
	
}
