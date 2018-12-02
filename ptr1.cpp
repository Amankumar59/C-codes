#include<iostream>
using namespace std;

class test{
int i;
public:
void set(){
cin>>i;
}
void dis(){
cout<<i;
}
};
int main(){
test t;
test *ptr;
ptr=&t;
ptr->set();
ptr->dis();
return 0;}
