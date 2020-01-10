/* Chapter 5，Programming exercises 5-6*/
#include <iostream>
int main()
{
    using namespace std;
    string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int sale_volume[3][12];
    long total_volume[4] ;
    for(int j = 0;j<3;j++){
        cout<<"This is the "<<j<<" year."<<endl;

        for(int i=0;i<12;i++){
            cout<<"the "<<months[i]<<" month is: ";
            cin>>sale_volume[j][i];
            total_volume[j] += sale_volume[j][i];
        }
        total_volume[3] +=total_volume[j];
    }
    cout<<"Total volume of the first year is : "<<total_volume[0]<<endl;
    cout<<"Total volume of the second year is : "<<total_volume[1]<<endl;
    cout<<"Total volume of the third year is : "<<total_volume[2]<<endl;
    cout<<"Total volume  is : "<<total_volume[3]<<endl;


    return 0;
}

