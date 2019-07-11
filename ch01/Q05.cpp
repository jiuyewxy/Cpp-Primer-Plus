#include <iostream>

float exchange(float);

int main()
{
    using namespace std;
    float celsius;
    cout<<"Please enter a Celsius value:";
    cin>>celsius;
    cout<<celsius<<" degrees Celsius is "<<exchange(celsius)<<" degrees Fahrenheit."<<endl;
    return 0;
}

float exchange(float degree)
{
    return degree*1.8+32.0;
}

