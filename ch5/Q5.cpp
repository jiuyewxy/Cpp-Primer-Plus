/* Chapter 5，Programming exercises 5-5*/
#include <iostream>
int main()
{
    using namespace std;
    string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int sale_volume[12];
    int total_volume =0;
    for(int i=0;i<12;i++){
        cout<<"the "<<months[i]<<" month is: ";
        cin>>sale_volume[i];
        total_volume += sale_volume[i];
    }
    cout<<"Total volume is : "<<total_volume<<endl;
    return 0;
}

