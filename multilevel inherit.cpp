#include<iostream>
using namespace std;

class base1{
int x;
public:
base1(int x1){
    x=x1;
     cout<<x;
    cout<<"==base1 const"<<endl;
}
~base1(){
cout<<"base1 destructor;"<<endl;}
};


class base2:public base1{
int y;
public:
base2(int y1,int y2):base1(y2){
    y=y1;
    cout<<y;
    cout<<"==base2 const"<<endl;
}
~base2(){
cout<<"base2 destructor;"<<endl;}

};


class derv :public base2{
int z;
public:
derv(int xx,int yy,int zz):base2(yy,zz){
    z=xx;
    cout<<z;
    cout<<"==derv const"<<endl;;
}
~derv(){
cout<<"deerv destructor"<<endl;
}
};

int main(){
derv d(10,20,30);
}
