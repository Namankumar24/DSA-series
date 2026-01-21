
#include <iostream>
using namespace std;

int main () {

    string s;
    int flag =1;

    cout<<"Enter the string :-\n";
    cin>>s;

    int n=s.length();
    for (int i =0; i<n/2; i++) {

        if (s[i] != s[n-i-1]) {
            flag=0;
            break;
        }
    }
    if (flag) {

        cout<<"Palindrom ..";
    }
    else {
        cout<<"Not a Palindrom ..";
    }

    return 0;
}