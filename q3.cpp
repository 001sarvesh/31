// Write a C++ program to calculate the percentage of a student using multi-level
// inheritance. Accept the marks of three subjects in base class. A class will be derived
// from the above mentioned class which includes a function to find the total marks
// obtained and another class derived from this class which calculates and displays the
// percentage of students.

#include<iostream>
using namespace std;

class base{
    public:
    int a,b,c;
void accept(){
    cout<<"enter marks of first subject\n";
    cin>>a;
     cout<<"enter marks of first subject\n";
    cin>>b;
     cout<<"enter marks of first subject\n";
    cin>>c;
}
};

class Tmarks : public base{
public:
float total;

public:
void totalmarks(){
    total = a + b+ c;
}
};
class Per : public Tmarks{
public:
int per;
void percentage(){
    per = total/3.0;
}
void display(){
    cout<<"The percentage of student is "<<per;
}
};
int main()
{
Per p;
p.accept();
p.totalmarks();
p.percentage();
p.display();
  
  return 0 ;
}