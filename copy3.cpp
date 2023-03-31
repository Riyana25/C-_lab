/*Programming using parameterized constructor*/
#include<iostream>
using namespace std;

class Code{

    private:
    int id;

    public:
    Code(){

    }

    Code(int a)
    {
        id=a;
    }

    Code(Code &x)
    {
        id=x.id;
    }
    void display(void)
    {
        cout<<id;
    }
    
};

int main()
{
    Code A(100);
    Code B(A);
   
   cout<<"id of A"<<endl;
   A.display();

   cout<<endl<<"id of B"<<endl;
   B.display();
    
}