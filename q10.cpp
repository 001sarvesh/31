// Consider two base classes
// worker(int code, char name, float salary),
// officer(float DA, HRA)
// class manger(float TA(is 10% of salary), gross salary) is derived from both base
// classes.
// Write necessary member functions

// multiple Inheritence

#include <bits/stdc++.h>
using namespace std;

class worker
{
public:
  int code;
  char name[30];
  float salary;

  worker() // constructor
  {
  }
  worker(int c, char *n, float s)
  {
    code = c;
    strcpy(name, n);
    salary = s;
  }
  void putw()
  {
    cout << "\n Code     : " << code;
    cout << "\n Name      :" << name;
    cout << "\n Salary         :" << salary;
  }
};
class officer
{
public:
  float da, hra;
  officer()
  {
  }
  officer(float d, float h)
  {
    da = d;
    hra = h;
  }
  void puto()
  {
    cout << "\n DA    :" << da;
    cout << "\n HRA    :" << hra;
  }
};

class manager : public worker, public officer
{
public:
  float TA;
  float gsal;

public:
  manager()
  {
  }
  manager(int c, char *n, float s, float d, float h) : worker(c, n, s), officer(d, h)
  {
  }
  void putm()
  {
    putw();
    puto();
    TA = 0.10 * salary;
    cout << "\n TA    :" << TA;
    gsal = da + hra + TA + salary;
    cout << "\n Gross salary  " << gsal;
  }
};

int main()
{
int cnt, i;
cout<<"Enter Manager Count"<<endl;
cin>>cnt;
manager *m;
m = new manager[cnt];
for (int i = 0; i < cnt; i++)
{
  cout<<"Enter manager information for "<<i+1<<"\n";
  cout<<"--------------------------------------";
  cout<<"\nEnter code   ";
  int c;
  cin>>c;
  cout<<"\n Enter name   :";
  char n[200];
  cin>>n;
  cout<<"\nEnter salary    ";
  float s;
  cin>>s;
  cout<<"\n Enter DA    ";
  float d;
  cin>>d;
  cout<<"\n Enter HRA    :";
  float h;
  cin>>h;
  m[i] = manager (c,n,s,d,h);
}
for (int i = 0; i < cnt; i++)
{
  cout<<"\n--------------";
  cout<<"\n Manager Information ";
  m[i].putm();
}


  return 0;
}