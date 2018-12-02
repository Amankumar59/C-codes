#include<iostream>
using namespace std;

class media{
public:

virtual void show(){
cout<<"title==book"<<endl;
cout<<"price==500"<<endl;
}
};
class book:public media{
public:
void show(){
cout<<"pages=500"<<endl;
}
};
class cd:public media{
public:
void show(){
cout<<"play_time==2hours";
}
};

int main(){
media *ptr;
book b;
ptr=&b;
ptr->show();
cd d;
ptr=&d;
ptr->show();
return 0;}
