#include<iostream>
using namespace std;

int main() {

    int num ,original, rev=0, digit;

    cout<<"Enter number :- "<<endl;
    cin>>num;

    original = num ;

    while (num> 0) {

    digit = num % 10;
    rev = rev*10+digit;
    num = num /10;

    }

    if ( original == rev) {

        cout<<"Palindrom number.."<<endl;
    }
    else {
        cout<<"Not a palindrom number..";
    }
    return 0;
}