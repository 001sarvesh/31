// - In a bank, different customers have savings account. Some customers may
// have taken a loan from the bank. So bank always maintain information about
// bank depositors and borrowers.
// Design a Base class Customer (name, phone-number). Derive a class
// Depositor(accno, balance) from Customer.
// Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
// Write necessary member functions to read and display the details of ‘n’
// customers.

#include <iostream>
using namespace std;

class customer
{
public:
  char custo_name[30];
  long long int phone_no;

  void accept_custo()
  {
    cout << "Enter customer name\n";
    cin >> custo_name;
    cout << "Enter Customer phone number\n";
    cin >> phone_no;
  }
  void display_cust()
  {
    cout << "Enter Details of Customer" << endl;
    cout << "-------------------------" << endl;
    cout << "Customer Name   :<<custo_name"<<endl;
    cout << "Customer's Phone number  :<<phone_no"<<endl;
  }
};
class deposite : public customer
{
  int acc_no, balance;

public:
  void acceptdd()
  {
    cout << "Enter Customer account Number    :" << endl;
    cin >> acc_no;
    cout << "Enter balance     :" << endl;
    cin >> balance;
  }

  void displaydd()
  {
    cout << "Enter account number " << acc_no<<endl;
    cout << "Enter balance " << balance <<endl;
    cout << "----------------------" << endl;
  }
};

class borrow : public deposite
{
  int loan_no, loan_amt;

public:
  void acceptbb()
  {
    cout << "Enter Customer account Number    :" << endl;
    cin >> loan_no;
    cout << "Enter balance     :" << endl;
    cin >> loan_amt;
  }

  void displaybb()
  {
    cout << "Enter account number " << loan_no<<endl;
    cout << "Enter balance " << loan_amt<<endl;
    cout << "----------------------" << endl;
  }
};
int main()
{
  borrow *b1;
  int n, i;
  cout << "Enter No of Customers Details you want" << endl;
  cin >> n;
  b1 = new borrow[n];
  for (int i = 0; i < n; i++)
  {
    b1[i].accept_custo();
    b1[i].acceptbb();
    b1[i].acceptdd();
  }
  for (int i = 0; i < n; i++)
  {
    b1[i].display_cust();
    b1[i].displaydd();
    b1[i].displaybb();
  }

  return 0;
}