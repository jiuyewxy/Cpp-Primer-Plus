/* Chapter 6，Programming exercises 6-5*/
#include <iostream>
int main()
{
    using namespace std;
    cout<<"Enter the value of income:  ";
    double income;
    while(cin>>income && income >= 0){
        double income_tax;
        if (income<=5000)
        {
            income_tax = 0;
        }else if (income<=15000)
        {
            income_tax = (income-5000)*0.1;
        }else if (income <=35000)
        {
            income_tax = 10000*0.1+(income-15000)*0.15;
        }else
        {
            income_tax = 10000*0.1+20000*0.15+(income -35000)*0.2;
        }
        cout<<"income tax = "<<income_tax<<" tvarps"<<endl;
        cout<<"Enter the value of income:  ";

    }
    cout<<"Bye!"<<endl;
    return 0;
}

