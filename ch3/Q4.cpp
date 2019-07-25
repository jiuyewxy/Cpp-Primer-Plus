#include <iostream>

int main()
{
    using namespace std;
    long long seconds;
    const int hours_in_day = 24;
    const int time_trans = 60;
    int days, hours, minutes,seconds_int;
    float mid_value;
    cout<<"Enter the number of seconds: ";
    cin>>seconds;
    mid_value = ((long double)(seconds))/(time_trans*time_trans*hours_in_day);
    days = int(mid_value) ;
    mid_value = (mid_value - days)*hours_in_day;
    hours = int(mid_value);
    mid_value = (mid_value - hours)*time_trans;
    minutes = int(mid_value);
    seconds_int = (mid_value -minutes) * time_trans;

    cout<<seconds<<" seconds = "<<days<<" days, "<<hours<<" hours, "<<minutes<<" minutes, "<<seconds_int<<" seconds."<<endl;

    return 0;
}
