#include<iostream>
using namespace std;

class Date{
    private:
    int year;
    int month;
    int day;

    public:
    //default consructor
    Date(void)
    {
        year=0;
        month=0;
        day=0;
    }

    //parameterized consructor
    Date(int y,int m,int d)
    {
        year=y;
        month=m;
        day=d;
        
    }

    void getTime(void)
    {
        cout<<year<<"year and"<<endl;
        cout<<month<<"month"<<endl;
        cout<<day<<"day"<<endl;

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