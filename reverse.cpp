#include <iostream>
using namespace std;

int main () {

    int num, rev=0,i;

    cout<<"Enter the number :- "<<endl;
    cin>>num;

    while(num > 0) {
        i = num % 10;
        rev = rev*10+i;
        num = num / 10;
    }
    cout<<"Reversed number is = "<<rev;

    return 0;
}