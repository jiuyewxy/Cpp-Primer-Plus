/* Chapter 4，Programming exercises 4-3*/
#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char first_name[ArSize];
    char last_name[ArSize];

    cout<<"What is your first name ? ";
    cin.getline(first_name,ArSize);
    cout<<"What is your last name ? ";
    cin.getline(last_name,ArSize);
    // 拼接成一个简单的字符串。
    string s1 = first_name;
    string s2 = last_name;
    string name = s2 + ", " + s1;
    cout<<"Here is the information in a single string :" <<name<< endl;
    return 0;
}

