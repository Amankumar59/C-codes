#include<iostream>
#include<string.h>
using namespace std;
class student
{
	private:
		int roll_no;
		char name[20];
		int marks[3];
		int total();
		public:
			void set_data(int r,char *n,int m1,int m2,int m3);
			void display_data()
			{
				cout<<"Student details\n";
				cout<<"Roll no\n"<<roll_no;
				cout<<"\nName\n"<<name;
				cout<<"\nMarks\n"<<total();
			}
};
void student::set_data(int r,char n[20],int m1,int m2,int m3)
{
	cout<<"Enter student roll no name and marks respectively\n";
	cin>>r;
	cin>>n;
    strcpy(name,n);
	cin>>m1>>m2>>m3;
	marks[1]=m1;
	marks[2]=m2;
	marks[3]=m3;
	roll_no=r;	
}
int student::total()
{
	return (marks[1]+marks[2]+marks[3]);
}
int main()
{
	student a;
	int r;
	char n[20];
	int m1,m2,m3;
	a.set_data(r,n,m1,m2,m3);
	a.display_data();
}
