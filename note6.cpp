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

    //parameterized constructor
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
    Time settime(Time t);
};

 Time Time :: settime(Time t)
 {
     Time temp;
     temp.hrs=hrs+t.hrs+(min+t.min)/60;
     temp.min=(min+temp.min)%60;
     return temp;
     
 }

 int main()
 {

     Time t3;
     Time t4;

     Time t1(2,45);
     t1.getTime();

     Time t2(3,30);
     t2.getTime();

    t3=t1.settime(t2);
     t3.getTime();

     return 0;


 }