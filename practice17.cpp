//constructor in multiple inheritance
#include<iostream>
using namespace std;
class Alpha{
    int x;
    public:
    Alpha(int i)
    {
        x=i;
        cout<<"alpha initaialized"<<endl;
    }
    void show_x(void)
    {
        cout<<"x= "<<x<<endl;
    }
};
class Beta{
    float y;
    public:
    Beta(float f)
    {
        y=f;
        cout<<"beta initialization"<<endl;
    }
    void show_y(void)
    {
        cout<<"y ="<<y<<endl;
    }
};
class Gamma: public Beta,public Alpha{
    int m,n;
    public:
    Gamma(int a,float b,int c,int d): Alpha(a),Beta(b)
    {
        m=c;
        n=d;
        cout<<"gamma initialization"<<endl;
    }
    void show_xy(void)
    {
        cout<<"m= "<<m<<endl<<"n="<<n<<endl;
    }

};
int main()
{
    Gamma g(5,10.0,20,30);
    cout<<endl;
    g.show_x();
    g.show_y();
    g.show_xy();
    return 0;

}