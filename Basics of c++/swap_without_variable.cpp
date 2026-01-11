#include<iostream>
using namespace std;

int main() {

    int a,b;

    cout<<"Enter two number .. :- "<<endl;
    cin>>a>>b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"After swaping .. :- "<<endl <<"A = "<<a<<endl <<"B = "<<b ;

    return 0;
}