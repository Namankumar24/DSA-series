#include <iostream>
using namespace std;

int main() {

    char ch ;

    cout << "Enter the character :- "<<endl;
    cin>> ch;
     
    if (ch =='a'|| ch =='e' || ch =='i' || ch =='o' || ch =='u' || 
        ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U') {
            cout<<ch<<" :-  Is an vowel .."<<endl;
        }

        else {

            cout<<ch<<" :-  Is a consonant ..";
        }

        return 0;
}