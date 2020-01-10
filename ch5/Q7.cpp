/* Chapter 5，Programming exercises 5-7*/
#include <iostream>
struct CarBar{
    std::string make_name;
    int year_made;
};
int main()
{
    using namespace std;
    int number;
    cout<<"How many cars do you want to catalog? ";
    (cin>>number).get();
    CarBar *car = new CarBar[number];
    for(int i=0;i<number;i++){
        cout<<"car #"<<i+1<<":"<<endl;
        cout<<"Please enter the make:";
        getline(cin,car[i].make_name);
        cout<<"Please enter the year made:";
        (cin>>car[i].year_made).get();
    }
    cout<<"Here is your collection:"<<endl;
    for (int i = 0; i < number; ++i)
    {
        cout<<car[i].year_made<<" "<<car[i].make_name<<endl;
    }

    delete [] car;

    return 0;
}