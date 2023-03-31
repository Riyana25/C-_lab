//single inheritance 2 which is privately inheritated
#include<iostream>
using namespace std;

class Author{
    char bookTitle[20];
    int price;
    public:
    void readprice();
    int displayprice();
};

class Book1 : private Author{
    private:
    
    int price;
    int total;
    public:
    
    void setter();
    void getter();
    void display();
};


void Author :: readprice()
{
    cout<<"Enter the price"<<endl;
    cin>>price;

}
int Author :: displayprice()
{
    return price;

}



void Book1 ::setter()
{
    readprice();
    
    displayprice();
    
    cout<<"Enter the price"<<endl;
    cin>>price;
    

}
void Book1 :: getter()
{
   
    cout<<"the book price"<<endl<<price<<endl;
    
    
}

void Book1 :: display()
{
     if(price> displayprice())
     {
         cout<<"Author provide book in less cost"<<endl;
     }
    

}

int main()
{
    Book1 bo;
    
    bo.setter();
    bo.getter();
    bo.display();

    return 0;

}