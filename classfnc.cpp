#include<iostream>
using namespace std;
class emp
    {
private:
	char emp_name[20];
	double basic_pay;
	double cal_da()
	{
		double p;
		p=(0.5*basic_pay);
		return p;
	}
	double cal_hra()
	{
		double q;
		q=(0.25*basic_pay);
		return q;
	}
public:
	void read();
	void display_salary();
	};
	void emp::read()
	{
		cout<<"Enter salary and name of emplyee\n";
		cin>>basic_pay;
		cin>>emp_name;
	}
	void emp::display_salary()
	{
		double a,b;
		a=cal_da();
		b=cal_hra();
		cout<<"basic pay and name  = "<<basic_pay+a+b<<" "<<emp_name;
	}
int main()
{
	emp s;
	s.read();
	s.display_salary();
}    
