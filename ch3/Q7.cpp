#include <iostream>

int main()
{
    using namespace std;

    float haoyouliang,mpg;
    cout<<"输入耗油量（L/100KM): ";
    cin>>haoyouliang;
    cout<<"美国风格（mpg): "<<62.14/(haoyouliang/3.875)<<endl;

    return 0;
}