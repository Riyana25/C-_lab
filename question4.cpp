#include<iostream>
using namespace std;
class Distance2
{
    private:
    int feet;
    float inch;
    public:
    Distance2()
    {
        feet=0;
        inch=0.0;
    }
    Distance2(int i,float f)
    {
        feet=f;
        inch=i;
    }
    void display2()
    {
        cout<<"feet and inches are"<<feet<<"\t"<<inch;
    }
};

class Distance1
{
    private:
    float meter;
    float centi;
    public:
    Distance1()
    {
        meter=0;
        centi=0;
    }
    Distance1(float m,float c)
    {
        meter=m;
        centi=c;
    }
    void display1()
    {
        cout<<"meter and centi"<<meter<<centi<<endl;
    }
    operator Distance2();

};
Distance1 ::operator Distance2()
{
    float floatfeet=meter*3.3;
    int feet2 =static_cast<int>(floatfeet);
    float inch2 =0.4 * centi;
    return Distance2(feet2,inch2);

}
int main()
{
    Distance1 d1(5.0,6.0);
    d1.display1();

    Distance2 d2 =d1;
    d2.display2();
    return 0;

}