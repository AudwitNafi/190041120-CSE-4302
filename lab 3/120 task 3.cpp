#include <bits\stdc++.h>
#include <iostream>
using namespace std;
class Time
{
private:
    int hour = 5;
    int minute = 23;
    int second = 52;
public:
    int hours()
    {
        return hour;
    }
    int minutes()
    {
        return minute;
    }
    int seconds()
    {
        return second;
    }
    void reset(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void advance(int h, int m, int s)
    {
        second += s;
        minute += second/60;
        second %= 60;
        minute += m;
        hour += minute/60;
        minute %= 60;
        hour += h;
        hour %= 24;
    }
    void print()
    {
        cout <<hour << " hours " << minute << " min " <<second << " sec";
    }
};
int main()
{
    Time t1;
    t1.advance(2,3,11);
    t1.print();
}
