#include<iostream>
using namespace std;
class Counter
{
  private:
  int code;
  static int count;

  public:
  void setcode()
  {
    code = ++count;
  }
  void showcode();
  static void showcount();
};
//defining static members
int Counter :: count;
void Counter :: showcount()
{
  cout<<"count"<<"\t"<<count<<endl;
}
void Counter :: showcode()
{
  cout<<"object number"<<code<<endl;
}

int main()
{
  Counter c1,c2;
  c1.setcode();
  c2.setcode();

  Counter :: showcount();
  //c2.showcount();

  Counter c3;
  c3.setcode();

  Counter :: showcount();

  c1.showcode();
  c2.showcode();
  c3.showcode();
  return 0;
}
