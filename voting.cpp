#include<iostream>
using namespace std;

int main() {

    int age ;

    cout<<"Enter the AGE :- "<<endl;
    cin>>age;

    if (age >= 18) {

        cout <<" Aligible for voting ..";
    }

    else {
        
        cout<<" Not eligible for voting ..";
    }
    return 0;
}