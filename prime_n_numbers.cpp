
#include<iostream>
using namespace std;

int main() {

    int n;
    cout <<"Enter n number : ";
    cin>>n;

     cout<<"Prime numbers between n numbers are : \n";

    for (int i=2 ;  i<= n ;i++) {

     int flag = 1;
    
     for (int j=2; j<=i/2; j++) {
        if (i % j==0) {
            flag = 0;
            break ;
        }
     }
     
     if (flag == 1){
            cout<<i <<" ";
        }
     }

    return 0 ;
}