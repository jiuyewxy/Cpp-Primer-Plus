/* Chapter 4，Programming exercises 4-8*/
#include <iostream>
struct PizzaBar{
    std::string name;
    float diameter;
    float weight;
};
int main()
{
    using namespace std;
    PizzaBar *pizza = new PizzaBar;
    cout<<"Enter pizza diameter : \n";
    (cin>>pizza->diameter).get(); 
    cout<<"Enter pizza name : \n";
    getline(cin,pizza->name);
  
    cout<<"Enter pizza weight : \n";
    (cin>>pizza->weight).get();

    cout<<"Pizza name: "<<pizza->name << "| diameter: "<<pizza->diameter<<"| weight: "<<pizza->weight<<endl;
    delete pizza;
    return 0;
}