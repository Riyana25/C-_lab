/*Programming using default constructor*/
#include<iostream>
using namespace std;

class Integer{
    private:
    int m,n;

    public:
    Integer(void);//default constructor declaration

    void display(void)
    {
        cout<<"the value of m and n are"<<m<<endl<<n;
    }
};

//defining default constructor
Integer :: Integer(void)
{
    m=0;
    n=0;
}

int main()
{
   class Integer obj1;

   obj1.display();

   return 0;
}