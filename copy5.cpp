#include<iostream>
using namespace std;

int count = 0;

class Num{
    public:
    Num(){

        count++;
        cout<<"this is the time when constructor is called for boject number"<<count<<endl;


    }
           ~Num(){
               cout<<"this is the time when destructor is called for boject number"<<count<<endl;
               count--;
            }


};

int main()
{
    cout<<"we are inside main fun"j<<endl;

    cout<<"Creating 1st obj"<<endl;
    Num n1;
    {
        cout<<"creating 2 more objects"<<endl;
        Num n2, n3;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to main"<<endl;
}