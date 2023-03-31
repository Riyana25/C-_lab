#include<iostream>
using namespace std;

class Calculate{
    private:
    int real;
    int img;
    public:
    //default consructor
    Calculate(void)
    {
        real=0;
        img=0;
    }


//parameterized consructor
    Calculate(int r,int i)
    {
        real=r;
        img=i;
    }
    ~Calculate();
    Calculate(const Calculate &c4)
    {
        // cout<<"copy constructor called"<<endl;
        real=c4.real;
        img=c4.img;
        

    }

    void display(void)
    {
        cout<<"real and imaginary number are"<<real<<endl<<img<<endl;
    }

    void displayAdd(void)
    {
        cout<<"Addition is"<<real<<"+"<<img<<"i"<<endl;
        
        

    }
    void displaySub(void)
    {
        
        cout<<"Subtraction is"<<real<<" + "<<img<<"i"<<endl;
        

    }

    //declaration wwith bojects as arguments
    void addition(Calculate, Calculate);
    void subtraction(Calculate, Calculate);
    
};


 void Calculate :: addition(Calculate c1,Calculate c4)
 {
     int add;
     real = c1.real +c4.real;
     img = c1.img +c4.img;
     
     
 }
 void Calculate :: subtraction(Calculate c1,Calculate c4)
 {
     
     real = c1.real-c4.real;
     img = c1.img-c4.img;
     
     
 }
 Calculate ::  ~Calculate()
{
    cout<<"Destructor is called"<<endl;
}

 int main()
 {

    Calculate c3;

     Calculate c1(2,3);
     c1.display();
     
     Calculate c2(4,5);
     c2.display();
     Calculate c4(c2);
     c4.display();
     
    c3.addition(c1,c4);
    c3.displayAdd();

    c3.subtraction(c1,c2);

    c3.displaySub();
     

     return 0;


 }