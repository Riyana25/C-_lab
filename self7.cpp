//class objects as member functions
#include<iostream>
using namespace std;
class Time{
    private:
    int hrs,min;
    public:
    Time()
    {
        hrs=0;
        min=0;
    }
    Time(int h,int m)
    {
        hrs=h;
        min=m;
    }
    void add(Time t1,Time t2);
    void display(void);
};
void Time :: display()
{
    cout<<"Hours ="<<hrs<<"Min ="<<min<<endl;
}
void Time :: add(Time t1,Time t2)
{
    hrs=t1.hrs+t2.hrs+(t1.min+t2.min)/60;
    min=(t1.min+t2.min)%60;
}

int main()
{
    Time t1(2,60);
    t1.display();
    Time t2(4,20);
    t2.display();
    Time t3;
    t3.add(t1,t2);
    t3.display();
    return 0;

}