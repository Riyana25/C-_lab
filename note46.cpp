//a random reading from a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    streampos begin,end;
    ifstream fin;
    char ch;
    fin.open("myfile.txt");
    cout<<"data in file"<<endl;
    // begin =fin.tellg();
    // fin.seekg(0,ios::end);
    // end=fin.tellg();
    // cout<<"the current size is "<<end-begin<<" bytes"<<endl;

    fin.seekg(5,ios::beg);
   

    while(!fin.eof())
    {
        fin.get(ch);
        cout<<ch;
    }
    // fin.seekg(0);
    // fin.seekg(0,ios::beg);
     
    begin=fin.tellg();
    fin.seekg(0,ios::end);
    end=fin.tellg();
    fin.close();
    cout<<"size is"<<(end-begin)<<"bytes \n";
    return 0;
}
        
        
   