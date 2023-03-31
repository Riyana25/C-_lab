#include<iostream>
using namespace std;

class Time{
    private:
    int hrs;
    int min;

    public:
    //default consructor
    Time(void)
    {
        hrs=0;
        min=0;
    }

    //parameterized consructor
    Time(int h,int m)
    {
        hrs=h;
        min=m;
    }

    void getTime(void)
    {
        cout<<hrs<<"hours and"<<endl;
        cout<<min<<"minutes"<<endl;

    }

    //declaration wwith bojects as arguments
    void settime(Time, Time);
};

 void Time :: settime(Time t1, Time t2)
 {
     min=t1.min + t2.min;
     hrs= min/60;
     min= min%60;
     hrs = hrs+ t1.hrs +t2.hrs;
 }

 int main()
 {

     Time t3;

     Time t1(2,45);
     t1.getTime();

     Time t2(3,30);
     t2.getTime();

    t3.settime(t1,t2);
     t3.getTime();

     return 0;


 }