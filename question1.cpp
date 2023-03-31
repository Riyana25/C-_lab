#include<iostream>
using namespace std;
class Currency
{
    private:
    float rupee;
    int paisa;
    public:
    Currency()
    {
        rupee=0;
        paisa=0;
    }
    //conversion constructor
    Currency(float rupees)
    {
        rupee=rupees;
        float floatpaisa = rupees*100;
        paisa = static_cast<int>(floatpaisa);

    }
    void display()
    {
        cout<<rupee<<"rupees"<<endl<<paisa<<"paisa"<<endl;
    }
};
int main()
{
    float rupees;
    cout<<"Enter rupees"<<endl;
    cin>>rupees;

    Currency curr;
    curr = rupees;
    curr.display();
    return 0;
}