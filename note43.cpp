#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    streampos begin,end;
    char ch;

    ifstream myfile("example.txt",ios::binary);

    begin=myfile.tellg();
    while(myfile.seekg(5,ios::end))
    {
        myfile.get(ch);
        cout<<ch;
    }
    
    // end=myfile.tellg();
    myfile.close();
    // cout<<"size is"<<(end-begin)<<"bytes \n";
    return 0;
}