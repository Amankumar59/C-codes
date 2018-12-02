#include<iostream>
using namespace std;

class base{

public:

base(){
cout<<"base const";
}
virtual ~base(){
cout<<"base dest";
}
};

class derv:public base{
public:
derv(){
cout<<"derv const";
}
~derv(){
cout<<"derv dest";
}
};

int main(){
base *ptr;
ptr=new derv;
delete ptr;
return 0;
}
