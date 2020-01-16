/* Chapter 6，Programming exercises 6-9*/
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Patron{
    string name;
    double money;
};

int main(void)
{   
    // 从文件中读取信息。
    cout << "Read information from file. \n";
    ifstream infile;
    infile.open("6.txt");
    if (!infile.is_open())
    {
        cout<<"ERROR TO OPEN FILE.\n";
        exit(1);
    }
    int number;
    (infile>>number).get();
    cout<<"The number of Patrons is : "<<number<<endl;
    Patron* Patron_array = new Patron [number];
    
    for(int i = 0; i < number; i++)
    {   
        getline(infile,Patron_array[i].name);
        cout << "Patron name #"<<i+1<<":"<<Patron_array[i].name<<endl;
        (infile >> Patron_array[i].money).get();
        cout << "money#"<<i+1<<":"<<Patron_array[i].money<<endl;
    }
    // 如果文件还没有读取完毕，把多余信息存入buffer。
    while(infile.good()){
        char buffer;
        infile>>buffer;
    }
    // 判断文件是否正常读取完毕。
    if(infile.eof()){
        cout<<"End of file reached.\n";
    }else if (infile.fail())
    {
        cout<<"Input terminated by data mistach.\n";
    }else{
        cout<<"Input terminatede by unknown reason.\n";
    }

    // 显示重要捐款人和普通捐款人。
    std::vector<string> grand_patron;
    std::vector<string> normal_patron;

    for(int i = 0; i < number; i++)
    {
        if(Patron_array[i].money > 10000)
            grand_patron.push_back(Patron_array[i].name);
        else
            normal_patron.push_back(Patron_array[i].name);

    }
    cout<<"Grand patrons: "<<endl;
    if (grand_patron.size()>0)
    {
        for (int i = 0; i < grand_patron.size(); ++i)
            cout<<grand_patron[i]<<endl;
    }else{
        cout<<"none\n";
    }
    cout<<"Patrons: "<<endl;
    if (normal_patron.size()>0)
    {
        for (int i = 0; i < normal_patron.size(); ++i)
            cout<<normal_patron[i]<<endl;
    }else{
        cout<<"none\n";
    }

    infile.close();
    delete [] Patron_array;

    return 0;
}