#include<iostream>
using namespace std;

class Media{
    protected:
    string mediaType;
    
    // int totalCost;
    int bookP;
    int audioP;
    public:
    void readData();
    virtual void cost()=0;//pure virtual function

};
void Media :: readData()
{
    cout<<"Enter the type of media"<<endl;
    // cin.ignore();
    getline(cin,mediaType);
    
    if(mediaType == "book")
        {
            cout<<"Enter the book price without discount"<<endl;
            cin>>bookP;
        }
    else if(mediaType == "audio")
        {
            cout<<"Enter the audio price without discount"<<endl;
            cin>>audioP;

        }
        
            
        
}
class Book : public Media{
    protected:
    int price1;
    int discount1;
    public:
    void setter()
    {
        readData();
        
        
            cout<<"We are lookin for book"<<endl;
            cout<<"Enter the price1 with discount"<<endl;
            cin>>price1;
            // return price1;
    }
    void cost()
    {
        if(price1 < bookP)
        {
            discount1 = bookP-price1;
            cout<<"we get"<<"\t"<<discount1<<"\t"<<"discount in book"<<endl;
        }
    }
};
class Audio : public Media{
    protected:
    int price2;
    int discount2;
    public:
    void set()
    {
        readData();
           cout<<"We are looking for audio"<<endl;
        
        cout<<"Enter the price1 with discount"<<endl;
        cin>>price2;

    }
    void cost()
    {
        if(price2 < audioP)
        {
            discount2 = audioP-price2;
            cout<<"we get"<<"\t"<<discount2<<"\t"<<"discount in audio"<<endl;
        }
        
    }
};

int main()
{
    Book b; 
    Audio a;
    
    b.setter();
    b.cost();
    cin.ignore();
    a.set();
    a.cost();

    return 0;

}