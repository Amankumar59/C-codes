//function overloading
#include<iostream>
using namespace std;
float volume(float);
float volume(float,float);
int volume(int);
int main()
{
	float h,r,c,x;
	int a,d;
	cout<<("Enter Height and radius of cylinder\n");
	cin>>h>>r;
	x=volume(h,r);
	cout<<"volume of cylinder is "<<x<<"\n";
	cout<<("Enter radius of sphere\n");
	cin>>(c);
	x=volume(c);
	cout<<"volume of sphere is "<<x<<"\n";
	cout<<("Enter side of cube\n");
	cin>>a;
	d=volume(a);
    cout<<"volume of sphere is "<<d<<"\n";
}
float volume(float h,float r)
{
	float x;
	x=3.14*r*r*h;
	return x;
}
float volume(float c)
{
	float x;
	x=(4*3.14*c*c*c)/3;
	return x;
}
int volume(int a)
{
    int x;
	x=a*a*a;
	return x;
}
