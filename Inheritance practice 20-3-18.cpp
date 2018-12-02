#include<iostream>
using namespace std;
class cement
{
	int bags;
	float cost;
	public:
		cement(int x,float y)
		{
			bags=x;
			cost=y;
		}
		int display()
		{
			return(bags*cost);
		}
};
class steel
{
	int tonees;
	float price;
	public:
		steel(int w,float z)
		{
			tonees=w;
			price=z;
		}
		int show()
		{
			return(tonees*price);
		}
};
class wood
{
	int cubic;
	float cost;
	public:
		wood(int p,float q)
		{
			cubic=p;
			cost=q;
		}
		int display1()
		{
			return(cubic*cost);
		}
};
class house : public cement,public steel,public wood
{
	float total;
	public:
		house(int bag,int tonns,int cubicw,float xb,float xs,float xw):cement(bag,xb),steel(tonns,xs),wood(cubicw,xw)
		{
			
		}
		int display2()
		{
			int sum = show()+display1()+display();
			cout<<"Total Cost to make building = "<<sum;
		}
};
int main()
{
	int bag,tonns,cubicw;
	float xb,xs,xw;
	cout<<"Enter number of cement bags = ";
	cin>>bag;
	cout<<"Enter steel required for building = ";
	cin>>tonns;
	cout<<"Enter wood required for building = ";
	cin>>cubicw;
	cout<<"Enter price of cement per bag = ";
	cin>>xb;
	cout<<"Enter price of steel per tonn = ";
	cin>>xs;
	cout<<"Enter price of wood per cubic = ";
	cin>>xw;
 house h1(bag,tonns,cubicw,xb,xs,xw);
 h1.display2();
}
