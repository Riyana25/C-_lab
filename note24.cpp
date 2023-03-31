//template and inheritance
#include<iostream>
using namespace std;
template<class T>
class Rectangle
{
    private:
    T l,b;
    public:
    void setvalues()
    {
        cout<<endl<<"input length and breadth"<<endl;
        cin>>l>>b;
    }
    T area()
    {
        return(l*b);
    }
};
template<class T>
class Cuboid : public Rectangle<T>
{
    private:
    T h;
    public:
    void set()
    {
        Rectangle<T>::setvalues();
        cout<<endl<<"input height"<<endl;
        cin>>h;
    }
    T volume()
    {
        return(h*Rectangle<T>::area());
    }
    void showVol()
    {
        cout<<endl<<"volume ="<<volume()<<endl;
    }
};
int main()
{
    Cuboid<int>c1;
    Cuboid<float>c2;
    c1.set();
    c1.showVol();
    c2.set();
    c2.showVol();
    return 0;
}