//Write a C++ program to demonstrate how a common friend function can
// be used to exchange the private values of two classes. (Use call by
// reference method) 

#include<iostream>
using namespace std;

class b;

class a{
public:
int x;
public:
a(){
    x = 134;
}
void show(){
    cout<<" Number 1 :\n "<<x; 
}
friend void swap(a *x, b *y);
};
class b{
    public :
    int y;
    public:
    b(){
        y = 340;
    }
    void show(){
        cout<<"Number 2:\n"<<y;
    }
    friend void swap(a *x, b *y);
};

void swap(a *No1, b *No2){
    int z;
    z = No1->x;
    No1->x = No2->y;
    No2->y = z;
}
int main()
{
a p;
b q;
swap(&p,&q);
p.show();
q.show();
  return 0 ;
}