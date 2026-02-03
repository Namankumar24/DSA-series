
#include<iostream>
using namespace std;
int main() {

    int n, i,j;

    cout<<"Enter the number n : ";
    cin>>n;

    // upper tringle

    for (i=1;i<=n;i++) {

        for(j=1;j<=i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }

    //lower tringle 

    for(i=n;i>=1;i--) {

        for(j=1;j<=i;j++) {
            cout<<"*";
        } 
        cout<<endl;
    }
    return 0;
}