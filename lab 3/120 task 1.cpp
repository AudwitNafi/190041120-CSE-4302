#include<iostream>
#include <bits\stdc++.h>
using namespace std;
class RationalNumber
{
private:
    int Numerator, Denominator;
public:
    void assign(int numerator, int denominator)
    {
        if(denominator == 0)
      	{
      	  cout << "The fraction is undefined!\n";
      	  return;
      	}
        Numerator = numerator;
        Denominator = denominator;
    }
    double convert()
    {
        double r = (double)Numerator/Denominator;
        return r;
    }
    void invert()
    {
        if(Numerator==0)
        {
            cout<<"The fraction is undefined\n";
            return;
        }
        swap(Numerator,Denominator);
    }
    void print()
    {
        if(Numerator == 0) cout << "The Rational Number is " << 0 << endl;
      	else cout << "The Rational Number is " << Numerator << "/" << Denominator << endl;
    }
};
int main()
{
    RationalNumber r1;
    r1.assign(3,5);
    r1.print();
    cout<<r1.convert()<<endl;
    r1.invert()
}
