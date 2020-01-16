/* Chapter 6，Programming exercises 6-7*/
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    cout<<"Enter words (q to quit):\n";
    string word;
    int vowel_count=0;
    int cons_count=0;
    int other_count=0;
    while(cin>>word && word!="q"){
        if (isalpha(word[0]))
        {
            word[0]=tolower(word[0]);
            if (word[0] == 'a'||word[0]=='e'||word[0]=='i'||word[0]=='o'||word[0]=='u')
            {
                vowel_count++;
            }else{
                cons_count++;
            }
        }else if(!ispunct(word[0])){
            other_count++;
        }
    }
    cout<<vowel_count<<" words beginning with vowels.\n";
    cout<<cons_count<<" words beginning with consonants.\n";
    cout<<other_count<<" words beginning with others\n";   
}