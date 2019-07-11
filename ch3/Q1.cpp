#include <iostream>
using namespace std;

int main()
{
    int high;
    const int con_factor = 12;  //一英尺=12英寸
    cout<<"Enter you heigth: __\b\b";   //下划线字符表示输入位置
    cin>>high;
    cout<<"Your hight is "<<high / con_factor<<" inches and "<< high % con_factor<<" feet. "<<endl;
    return 0;
}
