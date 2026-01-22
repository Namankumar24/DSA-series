

#include <iostream>
using namespace std;

int main() {

    int n, rem=1;
    
    cout<<"Enter the number : \n";
    cin>>n;

    if (n<=1)
    rem=0;

    for(int i=2; i< n/2; i++) {

        if (n % i== 0){
            rem=0;
            break;
        }
    }
     
    if(rem==1) {
        cout<<"Prime number ";
    }
    else {
        cout<<"Not prime ";
    }

    return 0;
}