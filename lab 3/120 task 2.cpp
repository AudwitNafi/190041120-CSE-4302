#include<iostream>
#include <bits\stdc++.h>
using namespace std;
class Medicine
{
private:
    char Name[21];
    char GenericName[21];
    double discountPercent = 5;
    double unitPrice = 0;
public:
    void assignName(char name [], char genericName[])
    {
        strcpy(Name, name);
        strcpy(GenericName, genericName);
    }
    void assignPrice(double price)
    {
        if(price>=0)
            unitPrice = price;
    }
    void setDiscountPercent(double percent)
    {
        if(percent<=45&&percent>=0)
            discountPercent = percent;
    }
    double getSellingPrice(int nos)
    {
        double ans = unitPrice-(unitPrice*(discountPercent/100));
        return ans*nos;
    }
    void display()
    {
        cout << Name <<"("<< GenericName <<") has a unit price of BDT " << unitPrice << ". Current discount " << discountPercent << "%" << endl;
    }
};
int main()
{
    Medicine m1;
    char m[] = "Napa";
    char g[] = "Paracetamol";
    m1.assignName(m, g);
    m1.assignPrice(20);
    m1.setDiscountPercent(10);
    cout<<m1.getSellingPrice(5)<<endl;
    m1.display();
}
