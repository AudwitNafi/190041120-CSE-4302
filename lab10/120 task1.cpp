#include<iostream>
#include<string>
using namespace std;
class Employee
{
protected:
    string name;
    int age;

public:
    //Employee(string n, int a): name(n), age(a){}
    virtual void getData()
    {
        cout<<"Enter name: "; cin>>name;
        cout<<"\nEnter age: "; cin>>age;
    }
    virtual void putData()=0;
};

class Engineer : public Employee
{
private:
    string level;
public:
    //Engineer();
    //Engineer(string n, int a, string l): Employee(n, a), level(l){}
    void getData()
    {
        Employee::getData();
        cout<<"\nLevel: "; cin>>level;
    }
    void putData()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Level: "<<level<<endl;
    }
};

class Labourer: public Employee
{
public:
    //Labourer(string n, int a): Employee(n, a){}
    void getData()
    {
        Employee::getData();
    }
    void putData()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main()
{
    Employee em;  //error
    Employee* e;
    Engineer eg1;
    e = &eg1;
    e->getData();
    e->putData();
    Labourer l;
    e = &l;
    e->getData();
    e->putData();
}
