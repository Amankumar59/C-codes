#include <iostream>

using namespace std;

class sample{
int i;
public:
    void get(){
    cin>>i;
    }
    void show(){
    cout<<i;
    }
    sample compare(sample &s){
        if((*this).i<s.i)
            return *this;
        else
            return s;
    }
};
int main()
{
sample s1,s2,s3;
s1.get();
s2.get();
s3=s1.compare(s2);
s3.show();
}
