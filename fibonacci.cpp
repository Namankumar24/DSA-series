#include<iostream>
using namespace std;

int main() {

    int n,a=0,b=1,next;

    cout<<"Enter number of term.."<<endl;
    cin >>n;

    cout <<"Fibonacci Series :- "<<endl;

    for (int i=1; i<=n; i++) {
        cout<< a <<"  ";

        next = a+b;
        a=b;
        b=next;
    }
    return 0;
}