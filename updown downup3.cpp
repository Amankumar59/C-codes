#include<iostream>
using namespace std;
#include<iostream>
#include<string.h>
using namespace std;

class Node{
protected:
    char brand_name[20];
    int mfg_yr;
    int warrentee_yr;
    public:
void getdata(){
cin>>brand_name;
cin>>mfg_yr;
cin>>warrentee_yr;
}
void show_data(){
    cout<<brand_name<<mfg_yr<<warrentee_yr;
}

};

class Server:private Node{
protected:
int MTTF;
int MTTR;
int TPS;
public:
   void getdata(){
   cin>>MTTF>>MTTR>>TPS;
   Node::getdata();
   }
void server_data(){
cout<<"MTTF :"<< MTTF;
cout<<"MTTR :"<<MTTR;
cout<<"tps :"<<TPS;
cout<<"nodes"<<endl;
show_data();
}
};


class lab:private Server{
protected :
int  num_nodes;
public:
   void getdata(){
   cin>>num_nodes;
   Server::getdata();
   }
void display(){
    cout<<"num nodes :"<<num_nodes<<endl;
    cout<<"server:"<<endl;
    server_data();

}
};

int main(){
lab l;

l.getdata();
l.display();

}
