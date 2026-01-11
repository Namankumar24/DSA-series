#include <iostream>
using namespace std;

int main () {
    int num;

    cout <<"Enter the number.. :- "<<endl;
    cin >> num;

    if (num > 0) {
        cout<<"Number is POSITIVE..:";
    }
     else if ( num < 0) {
        cout<<"Number is NEGATIVE..:";
     }
     else {
        cout<<" NUMBER IS = 0..:";
     }
     return 0;
}