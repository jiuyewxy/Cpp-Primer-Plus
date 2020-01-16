/* Chapter 6，Programming exercises 6-4*/
#include <iostream>
#include <string>
using namespace std;
const int strsize = 100;
struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;  // 0=fullname,1=title,2=bopname
};
char showMenu(){
    cout<<"Benevolent Order of Programmers Report:\n"
      "a. display by name       b.display by title\n"
      "c. display by bopname    d.display by preference\n"
      "q. quit\n";
    cout<<"Please enter a a, b, c, d or q: ";
    char choice;
    cin>>choice;
    return choice;
}


int main()
{   
    // 初始化
    bop boparray[4] = {{"Wimp Macho","Senior Engineer","WM",0},{"Lily Mar","Senior Programmer","MIPS",2},
                        {"Pat Hand","Junior Programmer","LOOPY",1},{"Hoppy Hipman","Junior Engineer","HHOP",1}};
    char choice;
    choice = showMenu();

    while( choice != 'q' && choice != 'Q'){
        switch(choice)
        {
            case 'a':
            case 'A':
                for(int i=0;i<4;i++)
                    cout<<boparray[i].fullname<<endl;
                break;
            case 'b':
            case 'B':
                for(int i=0;i<4;i++)
                    cout<<boparray[i].title<<endl;
                break;
            case 'c':
            case 'C':
                for(int i=0;i<4;i++)
                    cout<<boparray[i].bopname<<endl;
                break;
            case 'd':
            case 'D':
                // 根据偏好选择不同的显示，0=fullname,1=title,2=bopname
                for(int i=0;i<4;i++){
                    switch(boparray[i].preference){
                        case 0: 
                            cout<<boparray[i].fullname<<endl;
                            break;
                        case 1:
                            cout<<boparray[i].title<<endl;
                            break;
                        case 2:
                            cout<<boparray[i].bopname<<endl;
                            break;
                    }
                }
                break;
            default :
                choice = showMenu();
        }
        cout << "Next choice : ";
        cin>>choice; 
    }

    cout<<"Bye!"<<endl;
    return 0;
}