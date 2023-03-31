//Returning object from function
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
    Time add(Time t2);
    void display(void);
};
void Time :: display()
{
    cout<<"Hours ="<<hrs<<"Min ="<<min<<endl;
}
Time Time :: add(Time t2)
{
    Time temp;
    temp.hrs=hrs+t2.hrs+(min+t2.min)/60;
    temp.min=(min+t2.min)%60;
    return temp;
}

int main()
{
    Time t1(2,60);
    t1.display();
    Time t2(4,20);
    t2.display();
    Time t3;
    t3=t1.add(t2);
    t3.display();
    return 0;

}
