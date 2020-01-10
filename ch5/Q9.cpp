/* Chapter 5，Programming exercises 5-9*/
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout<<"Enter words. (To stop,type the word done):"<<endl;
    int i = 0,j = 0;
    string word;

    while(word != "done"){
        i++;
        cin>>word;
    }
    cout<<"you enter a total of "<<i-1<<" words"<<endl;
    return 0;
}

