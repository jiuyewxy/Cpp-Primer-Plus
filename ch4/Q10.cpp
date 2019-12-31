/* Chapter 4，Programming exercises 4-10*/
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<float,3> grade;
    cout<<"Enter grade1: ";
    cin>>grade[0];
    cout<<"Enter grade2: ";
    cin>>grade[1];
    cout<<"Enter grade3: ";
    cin>>grade[2];
    cout<<"average grade is : "<<(grade[0]+grade[1]+grade[2])/3<<endl;
    return 0;
}

