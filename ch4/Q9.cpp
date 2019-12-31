/* Chapter 4，Programming exercises 4-9*/
#include <iostream>
struct CandyBar{
    std::string brand;
    float weight;
    int calories;
};

int main()
{
    using namespace std;
    //CandyBar snack[3];
    CandyBar *snack = new CandyBar[3];
    snack[0] = {"Mocha Munch",2.3,350};
    snack[1] = {"qingdao Munch",7.2,650};
    snack[2] = {"qingdao lolo",3.4,450};

    cout<<"brand : "<<snack[0].brand<<endl;
    cout<<"weight : "<<snack[0].weight<<endl;
    cout<<"calories : "<<snack[0].calories<<endl;

    cout<<"brand : "<<snack[1].brand<<endl;
    cout<<"weight : "<<snack[1].weight<<endl;
    cout<<"calories : "<<snack[1].calories<<endl;

    cout<<"brand : "<<snack[2].brand<<endl;
    cout<<"weight : "<<snack[2].weight<<endl;
    cout<<"calories : "<<snack[2].calories<<endl;   

    delete [] snack;
    return 0;
}

