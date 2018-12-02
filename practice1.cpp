#include<iostream>
using namespace std;

class find
{
protected:
int lb,ub;
public:
void get()
{
cin>>lb>>ub;
}
};

class der_prime:public find
{
    int i,a[20],j=0,flag=1,b[20],k=0,k1,k2,c[20];
public:
void detect_prime()
{
for(i=lb;i<=ub;i++)
{
    if(i%2==0)
    {
        flag=0;
    }
    else{
        flag=1;
        a[j]=i;
        j++;
    }
}
for(i=0;i<j;i++){
    cout<<a[i]<<endl;
}
cout<<endl<<endl;
for(i=0;i<j;i++){
    while(a[i]!=0){
        k1=a[i]%10;
        b[k]=k1;
        a[i]=a[i]/10;
        k++;
    }
}

int temp=0;
for(i=0;i<k;i++){
    for(j=0;j<k;j++){
        if(b[i]<b[j]){
            temp=b[i];
            b[i]=b[j];
            b[j]=temp;
        }
    }
}
temp=0;
for(i=0;i<k;i++){
    cout<<b[i]<<endl;
}
int s;
k1=0,k2=0;
for(i=0;i<k;i=j){
        s=b[i];
    for(j=i;j<k;j++){

        if(s==b[j]){
            temp++;
        }
        else{
            break;
        }
    }

 a[k1]=temp;
 c[k2]=s;
    k1++;
    k2++;
     cout<<s<<"  "<<temp<<endl;
     temp=0;
     }
     temp=0;
for(i=0;i<k1;i++){
    if(a[i]>temp){
        temp=a[i];
        k2=i;
    }
}

cout<<c[k2]<<" "<<a[k2];
}
};

int main()
{
static der_prime d1;
d1.get();
d1.detect_prime();
//d1.print();
return 0;
}
