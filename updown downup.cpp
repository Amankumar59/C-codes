#include<iostream>
#include<string.h>
using namespace std;

class student{
protected:
char name[20];
char course[20];
public:
student(char *n,char *c){
strcpy(name,n);
strcpy(course,c);
}

char *get_name(){
return name;
}
char *get_course(){
return course;
}
};


class Marks:public student{
protected :
int marks[3];
public:

Marks(char *name,char *course,int *mark):student(name,course){
for(int i=0;i<3;i++){
marks[i]=mark[i];
}
}
int total(){
int tot=0;
for(int i =0;i<3;i++){
tot=tot+marks[i];
}
return tot;
}
};

class result:public Marks{
public:
result(char *name,char *course,int *mark):Marks(name,course,mark){

}
void display(){
cout<<"name: "<<get_name()<<endl;
cout<<"course :"<<get_course()<<endl;
cout<<"total:"<<total();
}
};

int main(){
char name[20];
char course[20];
int marks[3];
cin.getline(name,20);
cin.getline(course,20);
for(int i=0;i<3;i++){
cin>>marks[i];
}
result r(name,course,marks);
r.display();
return 0;
}
