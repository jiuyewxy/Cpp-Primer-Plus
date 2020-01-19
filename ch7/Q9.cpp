/* Chapter 6，Programming exercises 6-9*/
#include <iostream>
#include <string>
using namespace std;

const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

// prototype
int getinfo(student *pt, int n){
    int i;
    for (i = 0; i < n; ++i)
    {
        cout << "Enter info student #"<<i+1<<"：\n" << "fullname: ";
        cin.getline((pt+i)->fullname, SLEN);
        if((pt+i)->fullname[0]=='\0'){
            break;
        }
        cout << "hobby: ";
        cin.getline((pt+i)->hobby, SLEN);
        cout << "ooplevel: ";
        (cin >> (pt+i)->ooplevel).get();

    }
    cout<<"Input Done\n";
    return i;
}

void display1(student stu)
{   
    cout<<"------- Diplay 1----------\n";
    cout << "name: " << stu.fullname << endl;
    cout << "hobby: " << stu.hobby << endl;
    cout << "ooplevel: " << stu.ooplevel << endl;
}

void display2(const student * pstu)
{   
    cout<<"------- Diplay 2----------\n";
    cout << "name: " << pstu->fullname << endl;
    cout << "hobby: " << pstu->hobby << endl;
    cout << "ooplevel: " << pstu->ooplevel << endl;
}

void display3(const student pa[], int n)
{   
    cout<<"------- Diplay 3----------\n";

    student * pt;
    for(int i = 0; i < n; ++i)
    {
        cout << "info #" << i+1 << endl;
        cout << "name: " << (pa + i)->fullname << endl;
        cout << "hobby: " << (pa + i)->hobby << endl;
        cout << "ooplevel: " << (pa + i)->ooplevel << endl;
    }
}

int main(void)
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;

    while(cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    
    for(int i = 0; i < entered; ++i)
    {   
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);

    delete [] ptr_stu;
    cout << "Done" << endl;

    return 0;
}


