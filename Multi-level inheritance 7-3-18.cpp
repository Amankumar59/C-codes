#include<iostream>
using namespace std;
class student
{
	int r;
	char name[20];
	public:
		void read()
		{
			cin>>r;
		}
		void display()
		{
			cout<<r<<endl<<name<<endl;
		}
};
class marks : public student
{
	protected:
		int s1,s2,s3;
		public:
			void getmarks()
			{
				cin>>s1>>s2>>s3;
			}
			void putmarks()
			{
				cout<<s1<<endl<<s2<<endl<<s3<<endl;
			}
};
class result : public marks
{
	int total;
	float p;
	char div[20];
	public:
		void process()
		{
			total=s1+s2+s3;
			p=total/3;
		}
		void print_result()
		{

		}
};
int main()
{
	result t;
	t.read();
	t.getmarks();
	t.process();
	t.display();
	t.putmarks();
	t.print_result();
}

