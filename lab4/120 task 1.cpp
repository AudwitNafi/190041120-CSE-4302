#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
private:
    int accNum;
    string holderName, type;
    double currBal, minBal;
public:
    static int cnt;
    BankAccount()
    {
        cout<<"Name of Account Holder: ";
        cin>>holderName;
        cout<<"Type of Account: ";
        cin>>type;
        cout<<"Current Balance: ";
        cin>>currBal;
        cout<<"Minimum Balance: ";
        cin>>minBal;
        accNum = ++cnt;
    }
    void showInfo()
    {
        cout<<"Account Number: "<<accNum<<endl;
        cout<<"Name of Account Holder: "<<holderName<<endl;
        cout<<"Type of Account: "<<type<<endl;
        cout<<"Current Balance: "<<currBal<<endl;
        cout<<"Minimum Balance: "<<minBal<<endl;
    }
    double showBalance()
    {
        cout<<currBal<<endl;
    }
    void deposit(double d)
    {
        if(d<=0)
            cout<<"Invalid amount! Enter any amount greater than zero to deposit."<<endl;
        else
            currBal+=d;
    }
    void withdrawal(double w)
    {
        if(w<=0)
            cout<<"Invalid amount! Enter any amount greater than zero to withdraw."<<endl;
        else if((currBal-w)<minBal)
            cout<<"Minimum amount of BDT "<<minBal<<"must be in the account!"<<endl;
        else
            currBal-=w;
    }
     double giveInterest(double r = 0.03)
     {
         double interest = currBal*r;
         interest -=interest*0.1;
         deposit(interest);
     }
     ~BankAccount()
     {
         cout<<"Account of "<<holderName<<" with account no "<<accNum<<" is destroyed with balance BDT "<<currBal<<endl;
     }
};
int BankAccount::cnt = 0;
int main()
{
    BankAccount a1, a2;
    a2.deposit(-22.0);
    a1.deposit(22.0);
    a1.showBalance();
    a2.withdrawal(-10);
    a1.withdrawal(10);
    a1.withdrawal(11);
    a1.showBalance();
    a2.showBalance();
    a1.giveInterest(0.05);
    a2.giveInterest();
    a1.showInfo();
    a2.showInfo();
}
