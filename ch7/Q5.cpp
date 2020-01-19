/* Chapter 7，Programming exercises 7-5*/
#include <iostream>
using namespace std;

long factorial_calculation(int number){
    long result = 1;
    if (number>0){
        for (int i = number; i >0; --i)
        {
            result *=i;
        }
    }

    return result;
}
int main()
{
    using namespace std;
    int number;
    cout<<"The factorial of the number  ";
    while(cin>>number&&number>=0){
        cout<<"is: "<<factorial_calculation(number)<<endl;
        cout<<"------------"<<endl;
        cout<<"The factorial of the number  ";
    }
    cout<<"Bye!\n";
    return 0;
}

