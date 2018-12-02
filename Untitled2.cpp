//make a class triangle enter its 3 sides and calculate its area.
#include<iostream>
#include<math.h>
using namespace std;
class array
{
	private:
		int a[100];
	    int max=-999; 
	    int min=999;
	    int avg;
		public:
		void setdata(int);
		void getdata();
};
void array::setdata(int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	avg=sum/n;
}
void array::getdata()
{
	cout<<"Greatest no is"<<endl;
	cout<<max<<endl;
	cout<<"Smallest no is"<<endl;
	cout<<min<<endl;
	cout<<"Mean is "<<avg;
}
int main()
{
	array b;
	int n;
	cout<<"Enter no of numbers"<<endl;
	cin>>n;
	b.setdata(n);
	b.getdata();
}
	
