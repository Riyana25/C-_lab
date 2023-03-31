/*This is an ambiguity resolution in inheritance (dealing the case of uisng same function name in different classes)*/
#include<iostream>
using namespace std;

//class 1
class Science{
    protected:
    int marks1;
    public:
    void read(void);
    void display(void);
};
void Science :: read()
{
    cout<<"enter the marks in science"<<endl;
    cin>>marks1;

}
void Science :: display()
{
    cout<<"the marks in science is"<<marks1<<endl;

}
class Math{
    protected:
    int marks2;
    public:
    void read(void);
    void display(void);

};
void Math ::read()
{
    cout<<"enter the marks in math"<<endl;
    cin>>marks2;

}
void Math :: display()
{
     cout<<"the marks in math is"<<marks2<<endl;

}
class English{
     protected:
    int marks3;
    public:
    void read(void);
    void display(void);
};
void English :: read()
{
    cout<<"enter the marks in  english"<<endl;
    cin>>marks3;

}
void English :: display()
{
     cout<<"the marks in  is english"<<marks3<<endl;

}
class Result : public Science, public Math,public English
{
    private:
    int total;
    public:
    void displayTotal();
};
void Result :: displayTotal()
{
    total = marks1+marks2+marks3;
    cout<<"The total marks obtained is"<<total<<endl;
}
int main()
{
    Result student1;
    student1.Science::read();
    student1.Math::read();
    student1.English::read();
    student1.Science::display();
    student1.Math::display();
    student1.English::display();
    student1.displayTotal();
    return 0;
}