#include <iostream>

int main()
{   
    using namespace std;
    
    float mile, jialun, sheng;
    cout<<"输入公里: ";
    cin>>mile;
    cout<<"输入油量（加仑）： ";
    cin>>jialun;
    cout<<"每一百公里的耗油量（升）："<<jialun*3.875/mile*100<<endl;

    return 0;
}

