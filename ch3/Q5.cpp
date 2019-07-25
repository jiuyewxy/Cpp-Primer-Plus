#include <iostream>

int main()
{
    using namespace std;

    long long w_population, us_population;
    cout<<"Enter the world's population: ";
    cin>>w_population;
    cout<<"Enter the population of US: ";
    cin>>us_population;

    cout<<"The population of US is "<<(long double)(us_population)/w_population*1000<<"% of the world population"<<endl;

    return 0;
}

