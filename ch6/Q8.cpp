/* Chapter 6，Programming exercises 6-8*/
#include <iostream>
#include <fstream>
int main()
{
    using namespace std;
    ifstream infile;
    infile.open("6.txt");
    if (!infile.is_open())
    {
        cout<<"ERROR TO OPEN FILE.\n";
        exit(1);
    }
    char ch;
    int count=0;
    while(infile>>ch && infile.good()){
        count++;
    }
    if(infile.eof()){
        cout<<"End of file reached.\n";
    }else if (infile.fail())
    {
        cout<<"Input terminated by data mistach.\n";
    }else{
        cout<<"Input terminatede by unknown reason.\n";
    }
    cout<<"This file contains "<<count<<" letters.\n";
    infile.close();
    return 0;
}