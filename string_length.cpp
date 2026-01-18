
#include<iostream>
using namespace std;

int main() {

    string s;
    int count = 0;

    cout<<"Enter the word or sentence :- \n";
    getline(cin,s);

    for(int i=0; s[i]!= '\0'; i++) 

        count++;

        cout<<"Length = "<<count;

        return 0;
}