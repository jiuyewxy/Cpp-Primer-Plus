/* Chapter 5，Programming exercises 5-4*/
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    double Daphne_assets = 100;
    double Celo_assets = 100;
    int year = 0;
    while(Celo_assets <= Daphne_assets){
        year++;
        Daphne_assets = Daphne_assets + 100*0.1;
        Celo_assets = Celo_assets*(1.05);
    }
    cout<<"After "<<year<<" years,Celo_assets > Daphne_assets. Celo_assets = " <<Celo_assets<<". Daphne_assets = "<<Daphne_assets<<endl;

    return 0;
}