#include<iostream>
using namespace std;
class date{
int yy,mm,dd;
public:
date(){
cin>>yy>>mm>>dd;
}
void diff(date d2){
int n;
dd=dd-d2.dd;
if(dd<0){
   dd=dd+30;

}

}

};
int main(){
date d1;
date d2;
d1.diff(d2);

}
