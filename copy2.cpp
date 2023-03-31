

/*Programming using parameterized constructor*/
#include<iostream>
using namespace std;

class Integer{
    private:
    int m,n;

    public:
    Integer(int x,int y);//parameterized constructor declaration

    void display(void)
    {
        cout<<"the value of m and n are"<<endl<<m<<endl<<n;
    }
};

//defining parameterized constructor
Integer :: Integer(int x,int y)
{
    m=x;
    n=y;
}

int main()
{
   class Integer obj1(0,100);

   obj1.display();

   return 0;
}