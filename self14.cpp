//using friend function to avaluate tha total budgetof three investor
#include<iostream>
using namespace std;
class ShareHolder;
class Customer;
class CEO
{
    private:
    int budget;
    public:
    void read();
    friend void display(CEO ,ShareHolder,Customer);
};
void CEO :: read()
{
    cout<<"Enter the budget for CEO"<<endl;
    cin>>budget;
}
class ShareHolder{
    private:
    int budget;
    public:
    void set();
    friend void display(CEO ,ShareHolder,Customer);

};
void ShareHolder :: set()
{
    cout<<"Enter the budget of shareholder"<<endl;
    cin>>budget;
}
class Customer
{
    private:
    int budget;
    public:
    void setter();
    friend void display(CEO ,ShareHolder,Customer);
};
void Customer :: setter()
{
    cout<<"Enter the budget of customer"<<endl;
    cin>>budget;

}
void display(CEO c1,ShareHolder c2,Customer c3)
{
    int total;
    total= c1.budget+c2.budget+c3.budget;
    cout<<"The total budget is"<<total<<endl;
}
int main()
{
    CEO c1;
    c1.read();
    ShareHolder s1;
    s1.set();
    Customer b1;
    b1.setter();
    display(c1,s1,b1);
    return 0;
}