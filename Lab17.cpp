#include<iostream>
using namespace std;
class ElectronicDevices{
    protected:
    char deviceType;    
    
    public:
    void read(void)
    {
        cout<<"Enter the type of electronic device P for printer and s for scanner"<<endl;
        
        cin>>deviceType;
    }
    void get()
    {
        cout<<"The type of electronic device is"<<endl<<deviceType<<endl;
        
    }
    void display(void)
    {
        cout<<"printer scanner are used for photocopy"<<endl;
    }
};
class Printer : virtual public ElectronicDevices
{
    
    protected:
    // char s1;
    int copy1,copy2;
    public:

    void readCopy(void);
    void getCopy(void);
};
void Printer :: readCopy(void)
{
    // get();
    if(deviceType == 'p')
    {
        cout<<"we are printing"<<endl;
    }
    cout<<"Enter the number of copy 1  to be printed"<<endl;
    cin>>copy1;
    cout<<"Enter the number of copy 2 to be printed"<<endl;
    cin>>copy2;

}
void Printer :: getCopy()
{
    cout<<"The number of copy 1 to be printed"<<copy1<<endl;
    cout<<"The number of copy 2 to be printed"<<copy2<<endl;

}
class Scanner : virtual public ElectronicDevices
{
    protected:
    // char s2;
    int copy3,copy4;
    public:
    void setter(void);
    void getter(void);

};
void Scanner :: setter(void)
{
    // s2=get();
    if(deviceType == 's')
    {
        cout<<"we are scanning"<<endl;
    }
    cout<<"Enter the number of copy 3"<<endl;
    cin>>copy3;
    cout<<"Enter the number of copy 4"<<endl;
    cin>>copy4;

}
void Scanner :: getter()
{
    cout<<"The number of copy 3"<<copy3<<endl;
    cout<<"The number of copy 4"<<copy4<<endl;

}
class Photocopy: public Printer,public Scanner
{
    private:
    int total;
    public:
    void display();
};
void Photocopy :: display()
{
    total = copy1+copy2+copy3+copy4;
    cout<<"The total number of copy printed and scanned is:"<<total<<endl;
}
int main()
{
    Photocopy p;
    p.read();
    p.get();
    p.ElectronicDevices::display();
    p.readCopy();
    p.getCopy();
    p.setter();
    p.getter();
    p.Photocopy::display();
    return 0;
}