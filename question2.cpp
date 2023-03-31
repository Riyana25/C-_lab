#include<iostream>
using namespace std;
class Point
{
    private:
    int x;
    int y;
    public:
    friend istream& operator >>(istream &in,Point &p);
    friend ostream& operator <<(ostream &out,Point &p);

};
istream& operator >>(istream &in,Point &p)
{
    cout<<"Enter two integers "<<endl;
    in>>p.x>>p.y;
    return in;
}
ostream& operator <<(ostream &out,Point &p)
{
    out<<p.x<<endl<<p.y<<endl;
    return out;
}
int main()
{
    Point p;
    cin>>p;
    cout<<p;
    return 0;
}
