#include<iostream>
#include<string>
using namespace std;

class StudentResult
{
private:
    static int passMark;
    int subMark[6];
    bool fail;
public:
    StudentResult():passMark(30)
    {
        subMark = {0};
        fail = true;
    }
    void setMarks()
    {
        for(int i=0;i<6;i++)
        {
            cout<<"Marks for CSE 11"<<i<<endl;
            cin>>subMark[i];
        }
    }
    void displayMarks()
    {
        for(int i=0;i<6;i++)
        {
            cout<<"Marks for CSE 11"<<i<<" is "<<subMark[i]<<endl;
        }
    }
    void checkPassing()
    {
        for(int i=0;i<6;i++)
        {
            if(subMark[i]<passMark){
                fail = false;
                cout<<"The student has failed the course"<<endl;
                return;
            }
        }
        cout<<"The student has passed the course"<<endl;
    }
    bool getfail()
    {
        return fail;
    }
    ~StudentResult(){}
};
StudentResult():passMark(30)
int main()
{
    StudentResult s1;
    s1.setMarks();
    s1.displayMarks();
    s1.checkPassing();
}
