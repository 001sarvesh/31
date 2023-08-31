// Define a class Person with instance members name and age. Also define member
// functions setName(), setAge(), getName(), getAge(). Now define class Employee by
// inheriting Person class. In the Employee class define empid and salary as instance
// members. Also define setEmpid, setSalary, getEmpid, getSalary.

#include <iostream>
#include <cstring>

using namespace std;

class person
{
public:
    char name[50];
    int age;

public:
    void setname(char *n)
    {
        strcpy(name, n);
    }
    void setage(int a)
    {
        age = a;
    }
    char *getname()
    {
        return name;
    }
    char getage()
    {
        return age;
    }
};
class Emp : public person
{
    int empid;
    float salary;
public :
    void setid(int id)
    {
        empid = id;
    }
    void setsalary(int s)
    {
        salary = s;
    }
    int getid()
    {
        return empid;
    }
    int getsalary()
    {
        return salary;
    }

    void display()
    {
        cout << "Name = " << name <<endl<<"Age =" << age <<endl<< "empid =" << empid <<endl<< "salary = " << salary << endl;
    }
};

int main()
{
    Emp e;
    e.setname("Sarvesh");
    e.setage(20);
    e.setid(157);
    e.setsalary(1000000);

    e.display();
    return 0;
}