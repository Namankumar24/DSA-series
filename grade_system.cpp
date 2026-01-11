#include<iostream>
using  namespace std ; 

int main() {

    int mark ;

    cout<<"Enter the number between 0-100 : "<<endl;
    cin >> mark;

    if ( mark >=90 && mark <= 100) {
        cout  <<"Grade = A";
    }
    else if (  mark >=80 && mark < 90) {
         cout << "Grade = B";
    }
    else if (mark >=60 && mark < 80) {
        cout<<"Grade = C";
    }
    else if ( mark >=40 && mark < 60) {
        cout<< "Grade = D";
    }
    else if ( mark>=0 && mark < 40) {
        cout <<" Grade = F or Fail";
    }
    else {
        cout<<"Invalid Number...";
    }
    return 0;
}