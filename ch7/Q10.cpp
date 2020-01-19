/* Chapter 7，Programming exercises 7-10*/
#include <iostream>
using namespace std;

double add(double x,double y);
double min(double x,double y);
double calculate(double,double, double (*pf)(double,double));

int main(int argc, char const *argv[])
{   
    double x,y;
    cout<<"Enter two numbers:\n";
    while(cin>>x>>y){
        char ch;
        cout<<"Enter a for add or d for decrease:\n";
        cin>>ch;
        if(ch=='a'){
        cout<<"result: "<<calculate(x,y,add)<<endl;
        }else if (ch=='d')
        {
            cout<<"result: "<<calculate(x,y,min)<<endl;
        }else{
            break;
        }
        cout<<"Next two numbers:\n";
    }
    cout<<"Bye!"<<endl;
    return 0;
}

double add(double x,double y){
    return x+y;
}

double min(double x,double y){
    return x-y;
}


double calculate(double x,double y, double (*pf)(double,double)){
    return (*pf)(x,y);
}
