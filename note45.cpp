//a random reading from a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("myfile.txt");
    cout<<"data in file"<<endl;

    while(!fin.eof())
    {
        fin.get(ch);
        cout<<ch;
    }
    fin.close();
    return 0;
}
        
        
   