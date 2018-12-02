#include<iostream>
using namespace std;
int main()
{
int n,i,j,k=1,a[100][100];
cin>>n;
for(i=0;i<=n;i++)
{
	a[i][0]=1;
}
for(i=1;i<=n;i++)
{
	for(j=0;j<=i;j++)
	{
		if(a[i-1][j]!=0)
		a[i][j]=a[i-1][j]+a[i-1][j-1];
		else
		a[i][j]=1;
	}

}
for(i=0;i<=n;i++)
{
	for(j=0;j<=i;j++)
	{
		cout<<a[i][j]<<(" ");
	}
	cout<<("\n");
}



}

