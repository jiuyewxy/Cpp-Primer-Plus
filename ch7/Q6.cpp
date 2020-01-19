/* Chapter 7，Programming exercises 7-6*/
#include <iostream>
using namespace std;
// 数组输入函数
int Fill_array(double arr[],int length){
    int i=0;
    cout<<"array #"<<i+1<<": ";
    while(cin>>arr[i]){
        ++i;
        if (i>=length)
            break;
        cout<<"array #"<<i+1<<": ";
    }
    return i;
};
// 数组显示函数
void Show_array(const double arr[],int length){
    cout<<"show array: ";
    for(int i=0;i<length;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
};
// 反转数组
void Reverse_array(double arr[],int length){
    double temple;
    for (int i = 0; i < (length/2); ++i)
    {
        temple = arr[i];
        arr[i] = arr[length-i-1];
        arr[length-i-1]=temple;
    }
}
int main()
{   
    cout<<"Enter the length of the array :"<<endl;
    int array_length;
    cin>>array_length;
    double arr[array_length];
    int real_length;
    // 填充数组
    real_length = Fill_array(arr,array_length);
    cout<<real_length;
    // 显示数组
    Show_array(arr,real_length);
    // 翻转数组
    Reverse_array(arr,real_length);
    // 显示数组
    Show_array(arr,real_length);
    // 翻转数组中除第一个和最后一个元素以外的元素
    Reverse_array(arr+1,real_length-2);
    Show_array(arr,real_length);
    return 0;
}

