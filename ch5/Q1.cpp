/* Chapter 5，Programming exercises 5-1*/
#include <iostream>
using namespace std;

int main()
{
    int number1,number2,num =0 ;
    cout<<"Enter the first number :";
    cin>>number1;
    cout<<"Enter the second number : ";

    cin>>number2;
    for(int i = number1;i<=number2;i++){
        num += i;
    }
    cout<<"num is "<<num<<endl;
    return 0;
}

