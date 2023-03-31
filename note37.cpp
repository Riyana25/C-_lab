//reading a text file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream myfile("example.txt");
    string line;

    if(myfile.is_open())
    {
        while(getline(myfile,line))
        {
            cout<<line<<"\n";
        }
        myfile.close();
    }else{
        cout<<"unable to open a file";
    }
    return 0;
}