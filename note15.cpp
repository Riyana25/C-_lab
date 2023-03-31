//using minus overloading using friend function
#include<iostream>
using namespace std;
class Sample
{
    private:
    int x,y,z;
    public:
    void getData(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void showData()
    {
        cout<<"x="<<x<<"\t\ty="<<y<<"\t\tz="<<z<<endl;
    }

    //function overloading using friend function
    friend Sample operator-(Sample);
};
Sample operator-(Sample s)
{
    s.x= -s.x;
    s.y= -s.y;
    s.z= -s.z;
    return(s);
}
int main()
{
    Sample s1,s2;
    s1.getData(-11,22,-33);
    s1.showData();

    s2 = -(s1);
    s2.showData();
    return 0;
}