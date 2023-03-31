#include<iostream>
using namespace std;

class Test
{
    private:
    int code;
    static int count;

    public:
    void setcode()
    {
        code= ++count;
    }
    void showcode();
  static void showcount(); 

};
int Test :: count;

void Test :: showcode()
{
    cout<<"code"<<code<<endl;
}

void Test :: showcount()
{
    cout<<"count"<<count<<endl;

}

int main()
{
    Test t1,t2;
     t1.setcode( );
      t2.setcode( );
Test :: showcount( );
 t2.showcount( ); 
 Test t3;
t3.setcode( );
Test :: showcount( );
 t1.showcode( ); 
 t2.showcode( ); 
 t3.showcode( );
  return 0;
}