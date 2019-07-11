//计算体重指数IBM
#include <iostream>
#include <cmath>
using namespace std;

float compute_IBM(int, int, float);

int main()
{
    int height_inch,height_feet;
    float weight;
    cout<<"Height: ";
    cin>>height_inch>>height_feet;
    cout<<"Weight: ";
    cin>>weight;
    cout<<"IBM is : "<<compute_IBM(height_inch,height_feet,weight)<<endl;

    return 0;
}

float compute_IBM(int a, int b, float c)
{
    const int factor1 = 12;  //一英尺=12英寸
    const float factor2 = 0.0254;    //一英寸等于0.0254米
    const float factor3 = 2.2;   //一千克等于2.2磅
    float bmi;
    return bmi = (float(c)/factor3)/pow((a*factor1+b)*factor2,2);

}
