/* Chapter 5，Programming exercises 5-10*/
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout<<"Enter number of rows : "<<endl;
    int row_number;
    cin>>row_number;
    for (int i = 0; i < row_number; ++i)
    {
        for (int j = 0; j < row_number-i-1; ++j)
        {
            cout<<".";
        }
        for(int j = row_number-i-1;j<row_number;j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

