#include <iostream>
using namespace std;
class Bank
{
    char name[20];
    char accounttype[20];
    int acc;
    int balance, depost, debit;

public:
    void intial()
    {
        cin >> name >> acc >> accounttype >> balance;
    }

    void deposit()
    {
        cin >> depost;
    }



    void withdraw()
    {
        cin >> debit;
        if (debit < balance + depost)
        {
            balance = balance + depost - debit;
            
        }
        else if (debit > balance + depost)
        {
          balance = balance + depost;
            cout << "Insufficient amount" << endl;
        }    
    }
      void disp()
    {
        cout << "NAME=" << name << endl
             << "ACCNO=" << acc << endl
             << "TYPE=" << accounttype << endl
             << "BALANCEAMOUNT="<< balance<<endl;
    
    }
};
int main()
{
    Bank obj;
    obj.intial();
    obj.deposit();
  obj.withdraw();
    obj.disp();
    
    return 0;
}
