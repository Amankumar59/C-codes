#include<iostream>
using namespace std;

int add(int,int);
int (*fp)(int,int);

int main(){
int i;
int (*fp)(int,int);
fp=add;
i=(*fp)(2,3);
cout<<i;
return 0;
}
int add(int i,int Ṇj){
return (i+j);
}
