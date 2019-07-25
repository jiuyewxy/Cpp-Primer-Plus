#include <iostream>

int main()
{
    using namespace std;
    const int trans = 60;
    float degree_value, minute_value, second_value;
    cout<<"Enter a latitude in degree, minutes, and seconds: \nFirst, enter the degree: ";
    cin>>degree_value;
    cout<<"Next, enter the minutes of arc: ";
    cin>>minute_value;
    cout<<"Finally, enter the seconds of arc: ";
    cin>>second_value;
    cout<<degree_value<<" degrees, "<<minute_value<<" minutes, "<<second_value<<" seconds = "<<(second_value/trans+minute_value)/trans+degree_value<<" degrees."<<endl;


    return 0;
}

