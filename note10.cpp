//Assignment operator overloaded using member function
//assignment operator is not overloaded by friend function
#include<iostream>
using namespace std;
class Sample{
    private:
    int x,y;
    public:
    Sample()
    {
        
    }
    Sample(int ,int);
     
     //function overloading
     void operator=(Sample);
     void display();

};
Sample :: Sample(int a,int b)
{
    x=a;
    y=b;
}
void Sample :: operator=(Sample obj)
{
    x=obj.y;
    y=obj.x;
}
void Sample:: display()
{
    cout<<endl<<"x ="<<x;
    cout<<endl<<"y ="<<y;
}
int main()
{
    Sample obj2;
    Sample obj1(20,30);
    obj1.display();
    // obj2.display();
    obj2.operator=(obj1);
    // obj2=obj1; THis is similar to above statement
    obj1.display();
    obj2.display();
    return 0;
}