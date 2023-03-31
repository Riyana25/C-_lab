//program that overload the binary operator / using friend function

#include<iostream>
using namespace std;
class Class{
    private:
    int num1;
    int num2;
    int div1,div2;

    public:
    Class()
    {
        
        div1=0;
        div2=0;
        num1=0;
        num2=0;
        

    }
    Class(int n,int m)
    {
        num1=n;
        num2=m;         

    }
    //using friend function for overload
    friend Class operator/(Class ,Class);
    void display();
    void get()
    {
        cout<<"num1"<<endl<<num1<<endl<<"num2"<<endl<<num2<<endl;
    }
};

void Class :: display()
{
    cout<<"div1 is"<<div1<<"\t"<<"div2 is"<<div2<<endl;

}
Class operator/(Class c1,Class c2)
{
    Class temp;
    
    temp.div1=c1.num1/c2.num1;
    temp.div2=c1.num2/c2.num2;
    return temp;
}

int main()
{
    Class c3;
    Class c1(10,12);
    c1.get();
    Class c2(5,6);
    c2.get();
    // c1.display();
    // c2.display();

    //operator calling
    // c3=operator/(c1,c2);
    c3= c1/c2;
    c3.display();
    return 0;

}