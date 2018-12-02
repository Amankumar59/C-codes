#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j,k=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<k<<" ";
			
			k++;
		}
		cout<<"\n";
	}
}
