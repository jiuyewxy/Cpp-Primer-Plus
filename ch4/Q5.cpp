/* Chapter 4，Programming exercises 4-5*/
#include <iostream>
struct CandyBar{
    std::string brand;
    float weight;
    int calories;
};

int main()
{
    using namespace std;

    CandyBar snack = {"Mocha Munch",2.3,350};
    cout<<"brand : "<<snack.brand<<endl;
    cout<<"weight : "<<snack.weight<<endl;
    cout<<"calories : "<<snack.calories<<endl;

    return 0;
}

