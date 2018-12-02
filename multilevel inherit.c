#include<iostream>
using namespace std;

class base1{
int x;
public:
base1(int x1){
    x=x1;
     cout<<x;
    coutt"base1 const";
}
};


class base2:public base1{
int y;
public:
base1(int y1,int y2):base1(y2){
    y=y1;
    cout<<y;
    coutt"base2 const";
}
};


class derv :public base 2{
int z;
public:
derv(int xx,int yy,int zz):base2(yy,zz){
    z=xx;
    coutt"derv const";
}
};

int main(){
derv d(10,20,30);
}
