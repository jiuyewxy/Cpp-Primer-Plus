#include <iostream>
using namespace std;

void fun(int a, int b)
{
    cout<<"Enter the number of hours: "<<a<<endl;
    cout<<"Enter the number of minutes: "<<b<<endl;
    cout<<"Time: "<<a<<":"<<b<<endl;
}

int main()
{
    int hour,min;
    cin>>hour>>min;
    fun(hour,min);
    return 0;
}
