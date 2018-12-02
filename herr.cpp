#include<iostream>
using namespace std;

class employee{
protected:
    int id;
    char name[20];
    char designation [20];
public:
    void getemp_data(){
    cout<<"id"<<endl<<"name"<<endl<<"designation";
    cin>>id>>name>>designation;
    }
    void show_emp_data(){
    cout<<cout<<"id"<<endl<<"name"<<endl<<designation<<endl;
    cout<<id<<name<<designation;
    }
};

class contact: protected employee{
protected :
    int number;
    float wages;
public:
    void get_con_data(){
    employee::getemp_data();
    cout<<"number"<<endl<<"wages"<<endl;
    cin>>number>>wages;
    }
    void show_cont_data(){
        employee::show_emp_data();
    cout<<number<<wages;
    }
};
class permanent: protected employee{
protected:
    float basic,da,ta,hra;
public:
    void getper_data(){
    cout<<"enter basic pay,da,ta,hra";
    cin>>basic;
    }
    void show(){
    ta=.5*ta;
    da=.5*da;
    hra=.25*hra;
    basic=basic+hra+ta+da;
    cout<<"enter the new pay=="<<basic;    }
};

int main (){
contact c;
permanent p;
c.get_con_data()
;c.show_cont_data();
p.getper_data();
p.show();
return 0;
}
