/* Chapter 6，Programming exercises 6-6*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Patron{
    string name;
    double money;
};

int main(void)
{   
    cout << "Enter the number of patrons: \n";
    int number;
    (cin >> number).get();
    Patron* Patron_array = new Patron [number];
    
    for(int i = 0; i < number; i++)
    {
        cout << "Enter name #"<<i+1<<":"<<endl;
        getline(cin,Patron_array[i].name);
        cout << "Enter money#"<<i+1<<":"<<endl;
        (cin >> Patron_array[i].money).get();
    }
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


    delete [] Patron_array;

    return 0;
}