

#include<iostream>
using namespace std;
int main () {

    int n,i,j,k;

    cout<<"Enter the number n : ";
    cin>>n;
    for (i=1;i<=n;i++) {
        for (k=1;k<=n-i;k++) {
            cout<<" ";
        }
        for(j=1;j<=i;j++) {
        if (i==1 || i==n || j==1 ||j==i)
         {
            cout<<"* ";
        }
    else {
        cout<<"  ";
    }
}
        cout<<endl;
    }
    return 0;
}