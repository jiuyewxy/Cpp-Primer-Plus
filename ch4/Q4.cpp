/* Chapter 4，Programming exercises 4-4*/
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string first_name;
    string last_name;

    cout<<"What is your first name ? ";
    getline(cin,first_name);
    cout<<"What is your last name ? ";
    getline(cin,last_name);
    // 拼接成一个简单的字符串。
    string name = last_name + ", " + first_name;
    cout<<"Here is the information in a single string :" <<name<< endl;
    return 0;
}