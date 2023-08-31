// Write class declarations and member function definitions for a C++ base
// class to represent an Employee (emp-code, name).
// Derive two classes as Fulltime (daily rate, number of days, salary) and
// Parttime (number of working hours, hourly rate, salary).
// Write a menu driven program to:
// 1. Accept the details of ‘n’ employees.
// 2. Display the details of ‘n’ employees

#include <iostream>
using namespace std;

class Emp
{
public:
  int empno;
  char empname[30];

public:
  void get()
  {
    cout << "Enter employee Number\n";
    cin >> empno;
    cout << "Enter employee Name\n";
    cin >> empname;
  }
};

class fulltime : public Emp
{
public:
  float daily_rate;
  int days;
  float salary;

public:
  void getdata()
  {
    cout << "Enter daily rate\n";
    cin >> daily_rate;
    cout << "Enter Number of days\n";
    cin >> days;
  }
  void cal()
  {
    salary = daily_rate * days;
    cout << "salary \n"
         << salary;
  }
  void show()
  {
    cout << "\n---------------------\n";
    cout << "Enter Employee number\n"
         << empno;
    cout << "Enter Employee Name\n"
         << empname;
    cout << "Salary :\n"
         << salary;
    cout << "Status  :  FullTime";
  }
};

class parttime : public Emp
{
public:
  int working_days;
  float salary;
  float salary_rate;

public:
  void get1()
  {
    cout << "Enter Working days :\n";
    cin >> working_days;
    cout << "Enter Salary_Rate :\n";
    cin >> salary_rate;
  }
  void cal1()
  {
    salary = working_days * salary_rate;
    cout << "Salary :" << salary;
  }
  void show1()
  {
    cout << "\n---------------------\n";
    cout << "Enter Employee number\n"
         << empno;
    cout << "Enter Employee Name\n"
         << empname;
    cout << "Salary :\n"
         << salary;
    cout << "Status  :  PartTime";
  }
};
int main()
{
  int var = 0;
  int var1 = 0;
  fulltime f1[5];
  parttime p1[5];

  int x, i;
  do
  {
    cout << "\n";
    cout << "1.Enter record \n";
    cout << "2.Display record\n";
    cout << "3.Search record\n";
    cout << "4.Quit\n";

    cout << "Enter your choice :";
    cin >> x;
    switch (x)
    {
    case 1:
      int y;
      cout << "1.Full time Employee\n";
      cout << "2.Part time Employee\n";
      cout << "Enter :  ";
      cin >> y;
      switch (y)
      {
      case 1:
        f1[var].get();
        f1[var].getdata();
        f1[var].cal();
        var++;
        break;
      case 2:
        f1[var1].get();
        p1[var1].get1();
        p1[var1].cal1();
        var1++;
        break;
      }
      break;
      break;
    case 2:
      for (i = 0; i < var; i++)
      {
        f1[i].show();
      }
      for (int i = 0; i < var1; i++)
      {
        p1[i].show1();
      }
      break;
    case 3:
      int a;
      cout << "Enter Employee Number\n";
      cin >> a;
      for (int i = 0; i < var; i++)
      {
        if (f1[i].empno == a)
        {
          f1[i].show();
        }
        if (p1[i].empno == a)
        {
          p1[i].show1();
        }
      }
    }
  } while (x != 4);

  return 0;
}