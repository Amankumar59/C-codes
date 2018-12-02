#include<iostream>
using namespace std;

class Shape{
 public:
  void show(){
 cout<<"Abc";}
};

class Rectangle : public Shape{

 public:
  void show(){
  cout<<"showing rectangle";}
};

class Circle : public Shape{

  public:
//CODE
void show(){
  cout<<"showing circle";}

};

int main() {
    Shape * ptr;
    int choice;
    cin >> choice;

    if (choice == 1)
        ptr = new Rectangle();
      else if(choice == 2)
            ptr = new Circle();

    ptr->show();
    return 0;
}

