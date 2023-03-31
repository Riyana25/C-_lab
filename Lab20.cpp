#include<iostream>
using namespace std;
class Rectangle;
class  Shape{
    
    friend class Rectangle;
    private:
    int len,bre; 
    public:
    void readData();
    void displayData();

};
void Shape :: readData()
{
    cout<<"Enter the length and breath "<<endl;
    cin>>len>>bre;
}
void Shape :: displayData()
{
    cout<<"the length and breadth are"<<endl<<len<<endl<<bre<<endl;
}
class Rectangle{
    private:
    int area;
    public:
    void displayArea(Shape obj)
    {
        area = obj.len * obj.bre;
        cout<<"The area of rectangle ="<<area<<endl;
    }
};
int main()
{
    Shape obj1;
    Rectangle obj2;
    obj1.readData();
    obj1.displayData();
    obj2.displayArea(obj1);
    return 0;
}