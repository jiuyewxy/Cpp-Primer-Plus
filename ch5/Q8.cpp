/* Chapter 5，Programming exercises 5-8*/
#include <iostream>
#include <cstring>
const int ArSize =20;
int main()
{
    using namespace std;
    cout<<"Enter words. (To stop,type the word done):"<<endl;
    int i = 0,j = 0;
    char word[ArSize];

    while(strcmp(word,"done")){
        i++;
        cin>>word;
    }
    cout<<"you enter a total of "<<i-1<<" words"<<endl;
    return 0;
}