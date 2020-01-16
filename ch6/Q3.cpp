/* Chapter 6，Programming exercises 6-3*/
#include <iostream>
using namespace std;
char showChoice(){
    char choice;
    cout<<"Please enter one of the following choices:\n"
      "c) carnivore    p) pianist\n"
      "t) tree         g) game\n";
    cout<<"Please enter a c, p, t or g: ";
    cin>>choice;
    return choice;
}

int main()
{   

    char choice;
    choice = showChoice();
    bool is_choice_ok = false;
    while(!is_choice_ok){
        switch(choice)
        {
            case 'c':
            case 'C':
                cout<<"A maple is a carnivore"<<endl;
                is_choice_ok =true;
                break;
            case 'p':
            case 'P':
                cout<<"A maple is a pianist"<<endl;
                is_choice_ok =true;
                break;
            case 't':
            case 'T':
                cout<<"A maple is a tree"<<endl;
                is_choice_ok =true;
                break;
            case 'g':
            case 'G':
                cout<<"A maple is a game"<<endl;
                is_choice_ok =true;
                break;
            default :
                choice = showChoice();
        } 
    }
       
    return 0;
    
}

