//write a program to demonstrate the concept of file handling
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    ifstream fout;
    fout.open("example.txt");       
    do{
        fout.get(ch);  
        cout<<ch<<endl;
    }while(ch != fout.eof);

    fout.close();
    cout<<"\n Data read"<<endl;
    return 0;
    
}