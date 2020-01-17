/* Chapter 7，Programming exercises 7-1*/
#include <iostream>
using namespace std;
// 计算调和平均数
double harmonic_mean(double x, double y){
    double mean;
    mean = 2.0*x*y/(x+y);
    return mean;
}
int main()
{
    double x,y;
    cout<<"Enter two number:\n";
    cout<<"#1: ";
    cin>>x;
    cout<<"#2: ";
    cin>>y;

    while(x!=0&&y!=0){
        double mean = harmonic_mean(x,y);
        cout<<"harmonic mean is : "<<mean<<endl;
        cout<<"Enter two number:\n";
        cout<<"#1: ";
        cin>>x;
        cout<<"#2: ";
        cin>>y;
    }
    cout<<"Bye!"<<endl;
}

