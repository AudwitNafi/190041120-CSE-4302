#include<iostream>
#include<string>
using namespace std;
class Test
{
private:
    int a;
    Test(Test&);                     //assignment and copy contructor in
    Test operator = (Test&);         //private to prevent copying
public:
    Test(){}
    Test(int d):a(d){}
    void print()
    {
        cout<<a<<endl;
    }
};

class New
{
private:
    int a;
public:
    New(){}
    New(int d):a(d){}
    void print()
    {
        cout<<a<<endl;
    }
    New(New& n)
    {
        a = n.a;
        cout<<"Overloaded copy constructor invoked"<<endl;
    }

    void operator = (New& n)
    {
        a = n.a;
        cout<<"Overloaded assignment operator invoked"<<endl;
    }
};

class NotSuitable
{
private:
    int a;
    int b;
    int *c;
public: NotSuitable() {
    c=new int;
    }
 void input(int x, int y, int l) {
        a = x;
        b = y;
        *c = l;
    }
    void display() {
    cout<<"value of a:" <<a<<endl;
    cout<<"value of b:" <<b<<endl;
    cout<<"value of c:" <<*c<<endl;
    cout<<"memory location of c: "<<c<<endl;
 }
};
int main()
{
    Test t1(5);
    t1.print();
    //Test t2(t1);    //error
    Test t3;
    //t3 = t1;

    New n1(3);
    New n2 = n1;
    New n3;
    n3 = n1;
    n1.print();
    n2.print();
    n3.print();

    NotSuitable ns1, ns2;
    ns1.input(5,6,4);
    ns2 = ns1;    //error
    NotSuitable ns3(ns1);
    ns3.display();
    ns2.display();
    ns1.display();
}
