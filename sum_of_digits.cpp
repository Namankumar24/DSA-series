
#include<iostream>
using namespace std;
int main() {

    int n, sum=0;

    cout<<"Enter the digits : ";
    cin>>n;
   
    cout<<"Sum of the Digits are : ";

    while(n>0) {
        sum = sum + (n % 10);
        n = n/10;
    }
    cout<<sum;
    return 0;
}