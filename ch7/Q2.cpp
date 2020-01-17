/* Chapter 7，Programming exercises 7-2*/
#include <iostream>
using namespace std;
const int ArSize = 10;
// 数组输入函数
int input_score(double arr[]);
// 数组显示函数
void show_score(const double arr[],int max);
// 平均值计算函数
double get_avgrage(const double arr[],int max);

int main()
{   
    cout<<"Enter score( type -1 to stop ) "<<endl;
    double score_arr[ArSize];
    int max_index;
    max_index = input_score(score_arr);
    cout<<"Max index is:"<<max_index<<endl;
    show_score(score_arr,max_index);
    double average = get_avgrage(score_arr,max_index);
    cout<<"Average is : "<<average<<endl;
    return 0;
}

int input_score(double arr[]){
    int i=0;
    cout<<"score #"<<i+1<<": ";
    while(cin>>arr[i]&&arr[i]!= -1){
        ++i;
        if (i>=ArSize)
            break;
        cout<<"score #"<<i+1<<": ";
    }
    return i;
}
void show_score(const double arr[],int max){
    cout<<"score: ";
    for(int i=0;i<max;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;

}
double get_avgrage(const double arr[],int max){
    double average ;
    double total;
    for (int i = 0; i < max; ++i)
     {
         total += arr[i];
     } 
     average =total/double(max);
     return average;
}