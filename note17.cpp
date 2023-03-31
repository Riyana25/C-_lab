//COnversion from basic type to user defined (object )type
#include<iostream>
using namespace std;
const float MTF =3.280833;
//meter to feet
class Distance{
    private:
    int feet;
    float inch;
    public:
    Distance()
    {
        feet=0;
        inch=0.0;
    }
    Distance(float meter)
    {
        float floatfeet= MTF *meter;
        feet = int(floatfeet);
        inch=12*(floatfeet - feet);
    }
    void displaydist()
    {
        cout<<"Converted value is"<<feet<<"FT\t\t"<<inch<<"IN";
    }
};
int main()
{
    float meter;
    cout<<"Enter meters";
    cin>>meter;
    Distance dis;
    dis=meter;//basic to userdefined
    dis.displaydist();
    return 0;

}