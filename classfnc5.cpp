//wap to demonstrate the concept of function overloading in the member function of the class.
#include<iostream>
#include<string.h>
using namespace std;
class person
{
	private:
	int age;
	char name[20];
	float salary;
public:
void setdata();
void setdata(int a);
void setdata(int a,char n[]);
void setdata(int a,char n[],float s);
void showdata();
};
void person::setdata()
{
	cin>>age;
	cin>>name;
	cin>>salary;
}
void person::setdata(int a)
{
	cin>>name;
	cin>>salary;
	age=a;
}
void person::setdata(int a,char n[])
{
	age=a;
	strcpy(name,n);
	cin>>salary;
}
void person::setdata(int a,char n[],float s)
{
	age=a;
	strcpy(name,n);
	salary=s;
}
void person::showdata()
{
	cout<<age<<endl<<name<<endl<<salary<<endl;
}
int main()
{
	person d;
	int age;
	float salary;
	char name[20];
	cout<<"Enter age name and salary"<<endl;
	d.setdata();
	d.showdata();
	cout<<"Enter age name and salary"<<endl;
	cin>>age;
	d.setdata(age);
	d.showdata();
    cout<<"Enter age name and salary"<<endl;
	cin>>age;
	cin>>name;
	d.setdata(age,name);
	d.showdata();
	cout<<"Enter age name and salary"<<endl;
	cin>>age;
	cin>>name;
	cin>>salary;
}
