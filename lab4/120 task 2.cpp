#include<iostream>
#include<string>

using namespace std;

class employee
{
private:
    string empName;
    int ID;
    int Age;
    float Salary;
    string getStatus()
    {
        string low = "Low Salaried Person";
        string mod = "Moderate Salaried Person";
        string high = "High Salaried Person";
        if(Age<=25)
        {
            if(Salary<=20000.0) return low;
            else return mod;
        }
        else
        {
            if(Salary<=21000.0) return low;
            else if(Salary>21000.0&&Salary<=60000.0) return mod;
            else if(Salary>60000.0)return high;
        }
    }
    static int emp_count;
public:

    employee(){}

    void FeedInfo()
    {
        string name;
        int id, age, salary;
        cout<<"Name of employee: ";
        cin>>name;
        cout<<"ID: ";
        cin>>id;
        cout<<"Age: ";
        cin>>age;
        cout<<"Salary: ";
        cin>>salary;
        empName = name;
        ID = id;
        Age = age;
        Salary = salary;
    }
    void ShowInfo()
    {
        cout<<"Name: "<<empName<<endl;
        cout<<"ID: "<<ID<<endl;
        cout<<"Age: "<<Age<<endl;
        cout<<"Salary: "<<Salary<<endl;
        cout<<"Status: "<<getStatus()<<endl;
    }
    ~employee(){}
};
int main()
{
    employee a;
    a.FeedInfo();
    a.ShowInfo();
}
