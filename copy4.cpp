

/*Programming using copy constructor*/
#include<iostream>
using namespace std;

class Integer{
    private:
    int m,n;
    

    public:

    Integer(void)//default constructor
    {
        m=0;
        n=0;
    }

    Integer(int x,int y)//parameterized constructor declaration
    {
    m=x;
    n=y;
}

    // when copy constructor is not found,compiler supplies it's own copy constructor if yo line (Integer obj3(obj2);)garya xa vaney
    Integer(Integer &obj)//this is copy constructor
    {
        cout<<"copy constructor called"<<endl;
        m=obj.m;
        n=obj.n;


        
    }

    void display(void)
    {
        cout<<"the value of m and n are"<<endl<<m<<endl<<n<<endl;
    }
};

int main()
{
    Integer obj1;
    obj1.display();
    Integer obj2(100,200);
   obj2.display();
    Integer obj3(obj2);
    obj3.display();

    /*yo garda error awuxa 
    
    Integer obj3(obj1);
    obj3.display();
    
    but this is okay
    Integer obj4(obj1);
    obj4.display();

    */

return 0;
}