#include <iostream>
using   namespace std;

int main () {

    int year;

    cout << "Enter the year :- "<<endl;
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
         
        cout <<year <<" Is a leap year .."<<endl;
    }
     
    else {

        cout <<year <<" Not a leap year ..";
    }

    return 0;
}