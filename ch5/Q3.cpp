/* Chapter 5，Programming exercises 5-3*/
#include <iostream>
using namespace std;

int main()
{   
    int number;
    int sum = 0;
    cout<<"Enter number :"<<endl;
    
    while(cin){
        cin >> number;
        sum += number;
        cout<<"num  = "<<sum<<endl;

    }
       
    return 0;
}

