#include<iostream>
using namespace std;
int main () {

    string s;
    int words = 1;

    cout<<"Enter words or sentences :- \n";
    getline(cin,s);

    for(int i=0; i< s.length(); i++) {

        if(s[i]==' ')
        words++;
    }

    cout<<"Words = \n"<<words;

    return 0;
}