//routine in source object
#include<iostream>
using namespace std;
class Time12
{
    private:
    bool pm;
    int hrs;
    int mins;
    public:
    Time12()
    {
        pm=true;
        hrs=0;
        mins=0;
    }
    Time12(bool ap,int h,int m)
    {
        pm=ap;
        hrs=h;
        mins=m;
    }
    void display()
    {
        cout<<hrs<<':';
        if(mins<10)
        cout<<'0';
        cout<<mins<<' ';
        string am_pm=pm?"p.m."
    }
}