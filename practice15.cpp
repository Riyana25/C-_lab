//multilevel  inheritance using shape scenario
#include<iostream>
using namespace std;
class Shape{
    protected:
    int l,b;
    public:
    Shape(int length,int breadth)
    {
        l=length;
        b=breadth;

    }
    ~Shape()
    {
        cout<<"i am first"<<endl;
    }
    void displayShape();
};
void Shape :: displayShape()
{
    cout<<"lenghth = "<<l<<"breadth ="<<b<<endl;
}
class Rectangle : public Shape{
    protected:
    int area;
    public:
    Rectangle(int length,int breadth): Shape(length ,breadth)
    {
        cout<<"copied to shape"<<endl;

    }
    ~Rectangle()
    {
        cout<<"i am second"<<endl;
    }
    void calculateArea();
    
};
void Rectangle :: calculateArea()
{
    area= l*b;
    cout<<"The area of rectangle is "<<endl<<area<<endl;
}
class Cuboid : public Rectangle{
    protected:
    int height;
    public:
    Cuboid(int l,int b,int h) : Rectangle(l,b)
    {
        height =h;

    }
    ~Cuboid()
    {
        cout<<"i am last"<<endl;
    }
    void calculateVol();

};
void Cuboid :: calculateVol()
{
    int volume;
    volume= area*height;
    cout<<"The volume of cuboid is "<<volume<<endl;
}

int main()
{
    Cuboid c(2,3,4);
    cout<<endl;
    c.displayShape();
    c.calculateArea();
    c.calculateVol();
    return 0;

}
