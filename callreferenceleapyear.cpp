//wap to check leap year using call by reference
#include<iostream>
using namespace std;
void leap(int &);
int main()
{
	int n;
	cout<<("Enter year\n");
	cin>>(n);
	leap(n);
}
void leap(int &y)  //&y=n
{
	if(y%4==0)
	{
		cout<<("Leap Year");
	}
	else
	{
		cout<<("Not a leap Year");
	}
}
