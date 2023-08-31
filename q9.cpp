// Write a C++ program to implement the following class hierarchy:
// Student: id, name
// StudentExam (derived from Student): Marks of 6 subjects
// StudentResult (derived from StudentExam) : percentage
// Define appropriate functions to accept and display details.
// Create 'n' objects of the StudentResult class and display the marklist.

// multilevel inheritence

#include <iostream>
using namespace std;
class student
{
public:
    int i_d;
    char name[30];

    void getdata()
    {
        cout << "Enter I_D of student" << endl;
        cin >> i_d;
        cout << "Enter name of student" << endl;
        cin >> name;
    }
    void putdata()
    {
        cout << "\n----------------------------";
        cout << "----------Mark List***********\n";
        cout << "\n----------------------------";
        cout << "\n Student's  Id____" << i_d;
        cout << "\n Name of student " << name << endl;
    }
};
class studentexam : public student
{
public:
    int sub1, sub2, sub3, sub4, sub5, sub6;
    float per;

public:
    void accept_data()
    {
        getdata();
        cout << "Enter marks for subject1\n";
        cin >> sub1;
        cout << "Enter marks for subject2\n";
        cin >> sub2;
        cout << "Enter marks for subject3\n";
        cin >> sub3;
        cout << "Enter marks for subject4\n";
        cin >> sub4;
        cout << "Enter marks for subject5\n";
        cin >> sub5;
        cout << "Enter marks for subject6\n";
        cin >> sub6;
    }
    void display_data()
    {
        putdata();
        cout << "Marks of subject 1       : " << sub1;
        cout << "Marks of subject 2       : " << sub2;
        cout << "Marks of subject 3       : " << sub3;
        cout << "Marks of subject 4       : " << sub4;
        cout << "Marks of subject 5       : " << sub5;
        cout << "Marks of subject 6       : " << sub6;
    }
};
class studentresult : public studentexam
{
public:
    void calculate()
    {
        per = (sub1 + sub2 + sub3 + sub4 + sub5 + sub6) / 6.0;
        cout << "\n\n Total percentage     : " << per;
        cout << "\n--------------------------------------\n";
    }
};

int main()
{
    studentresult str;
    int cnt,i;
    cout<<"Enter number of students you want ?"<<endl;
    cin>>cnt;
    
    for (int i = 0; i < cnt; i++)
    {
        str.accept_data();
        str.display_data();
        str.calculate();
    }
    
    return 0;
}