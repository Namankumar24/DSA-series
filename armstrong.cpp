#include<iostream>
using namespace std;

int main() {

     int num, original, digit, sum=0;

     cout<<"Enter a number :- "<<endl;
     cin>>num;

     original = num;

     while (num > 0) {

      digit = num % 10;
      sum = sum + (digit*digit*digit);
      num = num/10;

     }
     
     if (sum == original) {
        cout<<"The number is Armstrong Number.."<<endl;
     }
     else {
        cout<<"The number is not a Armstrong Number..";
     }

     return 0;
}