/* Chapter 7，Programming exercises 7-7*/
#include <iostream>
const int Max = 5;
// function prototype
double * fill_array(double *, int );
void show_array(const double *, const double *);
void revalue(double , double *, double *);

using namespace std;

int main(void)
{
    double properties[Max];

    // fill array
    double * end = fill_array(properties, Max);
    // output array
    show_array(properties, end);

    if(end > properties)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while(!(cin >> factor))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }

    cout << "Done.\n" << endl;
    return 0;
}

double * fill_array(double * begin, int size)
{
    double temp;
    int i ;
    for(i = 0; i < size; ++i)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin) // bad input
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad imput; input process terminated.\n";
            break;
        }
        else if(temp < 0)
            break;
        else
            *(begin+i) = temp;
    }

    return begin + i ;
}

void show_array(const double * begin, const double * end)
{
    const double * pt;

    for(pt = begin; pt != end; ++pt)
    {
        cout << "Property #" << (pt-begin+1) << ": $";
        cout << *pt << endl;
    }
}

void revalue(double r, double * begin, double * end)
{
     double * pt;
    for(pt = begin; pt != end; ++pt)
        *pt *= r;
}