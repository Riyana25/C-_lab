//writing in a file using put() function
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("demo.txt");
    char ch;
    cout<<"enter character"<<endl;
    // cin.get(ch);
   
    if(fout.is_open())
    {
    do 
    {
        cin.get(ch);
        fout.put(ch);
        
        
        /* code */
    }while(!fout.eof());
    

    fout.close();
    }
    cout<<"Data written successfully";
    return 0;
}