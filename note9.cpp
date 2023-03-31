//Abstract Base class
#include<iostream>
using namespace std;
class Shape{
    protected:
    string color;
    public:
    virtual float area()=0;
    //pure virtual function
    string getcolor()
    {
        return color;
    }
};
class Circle : public Shape{
    private:
    float radius;
    public:
    void setValue(){
        cout<<"Enter radius"<<endl;
        cin>>radius;
        cout<<"Enter color"<<endl;
        cin>>color;
    }
    float area()//member function overriding
    {
        return(3.14*radius*radius);

    }
};
class Rectangle : public Shape{
    private:
    float len,bre;
    public:
    void setValue()
    {
        cout<<"Enter the length and breadth"<<endl;
        cin>>len>>bre;
        cout<<"Enter color"<<endl;
        cin>>color;
    }
    float area()//member function by overriding
    {
        return(len*bre);

    }
};

int main()
{
    Circle c;
    Rectangle r;
    c.setValue();
    r.setValue();
    cout<<"Area of"<<c.getcolor()<<"circle="<<c.area()<<endl;
    cout<<"Area of"<<r.getcolor()<<"circle="<<r.area()<<endl;
    return 0;
}