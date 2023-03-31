//Demonstration of default arguments
#include<iostream>
using namespace std;

void repchar(char = '!',int =45);
//declaration with default args

int main()
{
    repchar();
    //prints 45 exclamation marks
    repchar('=');
    //print 45 equal signs
    repchar('+',30);
    //print 30 plus signs
    return 0;
}

void repchar(char ch, int n)
{
    for(int j=0;j<n;j++)
    {
        cout<<ch;
        
    
    }
    cout<<endl;
}
