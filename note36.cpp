//writing on a text file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // ofstream myfile;
    // myfile.open("example.txt");

    //the above can be written as
    // ofstream myfile("example.txt");

    //this is opening file with write in file mode
    ofstream myfile("example.txt",ios::out);



    if(myfile.is_open())
    {
        myfile<<"This is a line \n";
        myfile<<"THis is an another line \n";
        myfile.close();
    }
    else
    cout<<"unable to open file"<<endl;
cout<<"data is written in file";

return 0;
}