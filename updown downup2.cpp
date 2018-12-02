#include<iostream>
#include<string.h>
using namespace std;

class Node{
protected:
    char brand_name[20];
    int mfg_yr;
    int warrentee_yr;
    public:
Node(char *b_name,int m_yr,int w_yr){
strcpy(brand_name,b_name);
mfg_yr=m_yr;
warrentee_yr=w_yr;
}
void show_data(){
    cout<<brand_name<<mfg_yr<<warrentee_yr;
}

};

class Server:public Node{
protected:
int MTTF;
int MTTR;
int TPS;
public:
    Server(char *brand_name,int mfg_yr,int warrentee_yr,int mttf,int mttr,int tps):Node(brand_name,mfg_yr,warrentee_yr){
    MTTF=mttf;
    MTTR=mttr;
    TPS=tps;
    }
void server_data(){
cout<<"MTTF :"<< MTTF;
cout<<"MTTR :"<<MTTR;
cout<<"tps :"<<TPS;
}
};


class lab:public Server{
protected :
int  num_nodes;
public:
    lab(char *brand_name,int mfg_yr,int warrentee_yr,int MTTF,int MTTR,int TPS,int nodes):Server(brand_name,mfg_yr,warrentee_yr,MTTF,MTTR,TPS){
    num_nodes=nodes;
    }
void display(){
    cout<<"num nodes :"<<num_nodes<<endl;
    cout<<"server:"<<endl;
    server_data();
    cout<<"node:"<<endl;
    show_data();
}
};

int main(){

char brand_name[20];
int mfg_yr,warrentee_yr,MTTF,MTTR,TPS,num_nodes;
cout<<"enter the details:brand name"<<endl<<"mfg_yr"<<endl<<"warrentee yr"<<endl<<"MTTF,MTTR,TPS"<<endl<<"num_nodes"<<endl;
cin.getline(brand_name,20);
cin>>mfg_yr>>warrentee_yr>>MTTF>>MTTR>>TPS>>num_nodes;
lab l(brand_name,mfg_yr,warrentee_yr,MTTF,MTTR,TPS,num_nodes);
//l.show_data();
//l.server_data();
l.display();
}
