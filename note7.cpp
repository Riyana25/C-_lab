//pointer to derived class
#include<iostream>
using namespace std;
class BC{
    public:
    int b;
    void show()
    {
        cout<<"b ="<<b<<endl;
    }
};
class DC : public BC{
    public:
    int d;
    void show()
    {
        cout<<"b="<<b<<endl;
        cout<<"d="<<d<<endl;
    }
};

int main()
{
    BC *bptr;//base pointer
    BC base;
    bptr = &base; //base address
    bptr->b=100;
    bptr->show();

    DC derived;
    //derived class
    bptr=&derived;//address of derived class
    bptr->b=200;
    //inherited member or member function can be accessed
    // bptr->d=300;//THis doesnot work because they cannot access the member that are originally belong to the derived class
    cout<<"bptr now point to derived object even call a base function show()"<<endl;
    bptr->show();//this call to base class function

    //accessing d using a pointer of derived class DC
    DC *dptr;
    dptr = &derived;
    dptr->d=300;
    cout<<"dptr is derived type pointer"<<endl;
    dptr->show();//this call to derived class function
    return 0;





}