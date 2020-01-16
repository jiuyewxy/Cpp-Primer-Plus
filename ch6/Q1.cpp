/* Chapter 6，Programming exercises 6-1*/
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter text to annalysis, and type @ to terminate input \n";
    while(cin.get(ch) && ch != '@'){
        if (islower(ch))
        {
            ch = toupper(ch);
        }else if (isupper(ch))
        {
            ch = tolower(ch);
        }
        // 输出，数字除外
        if (!isdigit(ch))
            cout<< ch;
    }
    cout<<endl;
    return 0;
}

