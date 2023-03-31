#include<iostream>
using namespace std;
class Item{
    int code;
    float price;

    public:
    void getData(int a,float b)
    {
        code =a;
        price= b;
    }

    void show(void)
    {
        cout<<"code:"<<code<<endl;
        cout<<"price:"<<price<<endl;
    }
};
const int size=2;
int main()
{
    Item *ptr =new Item[size];
    Item *d=ptr;
    int x,i;
    float y;

    for(i=0;i<size;i++)
    {
        cout<<"Input code and price for item"<<i+1;
        cin>>x>>y;
        ptr->getData(x,y);
        ptr++;
    }

    for(i=0;i<size;i++)
    {
        cout<<"item"<<i+1<<endl;
        d->show();
        d++;
    }

    return 0;
}