//using friend function and friend class to avaluate tha total budget of three investor
#include<iostream>
using namespace std;
class ShareHolder;
class Customer;
class CEO
{
    friend class Customer;
    private:
    int budget;
    public:
    void read();
    // void display(CEO ,ShareHolder);
};
void CEO :: read()
{
    cout<<"Enter the budget for CEO"<<endl;
    cin>>budget;
}
class ShareHolder{
    friend class Customer;
    private:
    int budget;
    public:
    void set();
    // void display(CEO ,ShareHolder);

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
    int total;
    public:
    void setter();
    void display(CEO ,ShareHolder);
};
void Customer :: setter()
{
    cout<<"Enter the budget of customer"<<endl;
    cin>>budget;

}
void Customer :: display(CEO c1,ShareHolder c2)
{
    
    total= c1.budget+c2.budget+budget;
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
    b1.display(c1,s1);
    return 0;
}