#include <iostream>
double exchange(double);

int main()
{
    using namespace std;
    double light_year;
    cout<<"Enter the number of light years: ";
    cin>>light_year;
    cout<<light_year<<" light years =  "<<exchange(light_year)<<" astronomical units."<<endl;
    return 0;
}

double exchange(double d)
{
    return 63240*d;
}
