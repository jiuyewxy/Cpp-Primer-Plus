/* Chapter 4，Programming exercises 4-1*/
#include <iostream>

int main()
{   
    using namespace std;
    const int ArSize = 20;
    char first_name[ArSize];
    char last_name[ArSize];
    char letter_grade[ArSize];
    int age;
    cout<<"What is your first name ? ";
    cin.getline(first_name,ArSize);
    cout<<"What is your last name ? ";
    cin.getline(last_name,ArSize);
    cout<<"What letter grade do you deserve? ";
    cin.getline(letter_grade,ArSize);
    cout<<"What is your age? ";
    (cin>>age).get();
    cout<<"name : "<< last_name <<", "<< first_name << endl;
    cout<<"grade : "<< letter_grade <<endl;
    cout<<"age: "<< age<<endl;
    return 0;
}
