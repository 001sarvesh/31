// Write a C++ program to design a base class Person (name, address,
// phone_no). Derive a class Employee (eno, ename) from Person. Derive a
// class Manager (designation, department name, basic-salary) from
// Employee. Write a menu driven program to:
// a. Accept all details of 'n' managers.
// b. Display manager having highest salary

#include <iostream>
using namespace std;

class person
{
public:
  char name[50];
  char address[100];
  int phoneNo;
};

class Emp : public person
{
public:
  int eno;
  char ename[40];
};

class Manager : public Emp
{
public:
  char desig[20];
  char dept[10];
  int salary;

  void accept()
  {
    cout << "Enter details of manager\n";
    cout << "-----------------------" << endl;

    cout << "Enter employee name\n";
    cin >> ename;

    cout << "Enter employee number\n";
    cin >> eno;
    cout << "Enter employeee phone Number\n";
    cin >> phoneNo;
    cout << "Enter employee address\n";
    cin >> address;

    cout << "Enter designation\n";
    cin >> desig;

    cout << "Enter deparment\n";
    cin >> dept;

    cout << "Enter salary\n";
    cin >> salary;
  }
};
int main()
{
  int i, count, temp;
  char manager_man[100];
  cout<<"How many managers you want to enter\n";
  cin>>count;

  for (int i = 1; i <= count; i++)
  {
    [i].accept();
  }
  temp = 0; // assumed 0 index manager has least salary

  for (int i = 1; i <= count; i++)
  {
    if(man[temp].salary < man[i].salary){
      temp = i;
    }
  }
  cout<<"Manager with highest salary"<<man[temp].salary<<endl;
  cout<<"And manager name is"<<man[temp].ename<<endl;
  
  return 0;
}