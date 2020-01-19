/* Chapter 7，Programming exercises 7-4*/
#include <iostream>

// Note: some implementations require double instead of long double

long double probability(unsigned numbers, unsigned picks);

int main()
{
    using namespace std;
    double total01, choices01;
    double total02, choices02;
    cout<<"Enter the total number of choices and the number of picks on the first game,and then \n";
    cout<<"Enter the total number of choices and the number of picks on the second game: \n";

    while ((cin>>total01>>choices01>>total02>>choices02) && choices01 <= total01 && choices02<=total02)
    {

        cout << "You have one chance in ";
        cout << probability(total01,choices01) * probability(total02,choices02);
        cout << " of winning.\n";
        cout << "Next four numbers (or 'q' to quit): ";
    }
    
    cout << "bye\n";
    return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;  // here come some local variables
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ; 
    return result;
}