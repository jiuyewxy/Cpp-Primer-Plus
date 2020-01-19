/* Chapter 7，Programming exercises 7-8*/
#include <iostream>
using namespace std;

// constant data
const int Seasons = 4;
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

void fill(double * pa){
    for(int i=0;i<Seasons;i++){
        cout<<"Enter "<<Snames[i]<<" expense: ";
        cin>>*(pa+i);
    }
}

void show( double * da){
    double total=0.0;
    cout<<"\nEXPENSES\n";
    for(int i=0;i<Seasons;i++){
        cout<<Snames[i]<<" ： $"<<*(da+i)<<endl;
        total+=*(da+i);
    }
    cout<<"Total expense: $"<<total<<endl;
}

int main()
{
    double Snames[Seasons];
    fill(Snames);
    show(Snames);
}