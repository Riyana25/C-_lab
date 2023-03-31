#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    ifstream fout;
    fout.open("example.txt");
    do
    {
        fout.get(ch);
        cout<<ch;
        /* code */
    }while(!fout.eof());
       
    
    fout.close();
    cout<<"data read";
    return 0;

}