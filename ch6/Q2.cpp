/* Chapter 6，Programming exercises 6-2*/
#include <iostream>
#include <cctype>
#include <array>
using namespace std;
const int ArSize = 10;

int main()
{   
    array<double, ArSize> donation;
    cout<<"Enter the value of donation and the number of donation does not exceed 10"<<endl;
    // 读取数字并计算平均值
    cout<<"donation #1: ";
    int i = 0;
    double total = 0.0;
    int larger_number =0;
    while(i<ArSize && cin>>donation[i]){
        total += donation[i];
        if (++i<ArSize)
        {
            cout<<"donation #"<<i+1<<": ";
        }
    }
    
    // 计算平均值以及数组中有多少个数字大于平均值
    double average = total/double(i);
    for (int j=0;j<i;j++){
        if (donation[j]>average)
            larger_number++;
    }

    cout << "Average is : " <<average<<endl;
    cout << "There are "<<larger_number<<" numbers larger than the average.\n";
    return 0;
}

