// Write a C++ program to add two numbers using single inheritance. Accept these two
// numbers from the user in base class and display the sum of these two numbers in
// derived class

#include<iostream>
using namespace std;

class base{
public :
int x,y;
void accept(){
    cout<<"Enter first Number\n";
    cin>>x;
    cout<<"enter second Number\n";
    cin>>y;
}
};

class derived : public base{
int sum;
public:
void Add(){
    sum = x+y;
}

void display(){
    cout<<"Addition of two numbers "<<sum;
}
};
int main()
{
    derived a;
    a.accept();
    a.Add();
a.display();
  return 0 ;
}