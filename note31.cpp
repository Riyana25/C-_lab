//specifying throw restriction
#include<iostream>
using namespace std;
void test(int x)throw(int ,double)
{
    if(x==0)
    throw 'x';
    else if(x ==1)
    throw x;
    else if( x == -1)
    throw 1.0;
}
int main()
{
    try{
        test(0);
        test(-1);
        test(1);
        test(2);
    }

    catch(char c)
    {
        cout<<"caught a char"<<endl<<endl;
    }
    catch(int m)
    {
        cout<<"cauht an int"<<endl;
    }
    catch(double d)
    {
        cout<<"caught a double"<<endl;
    }
return 0;
}