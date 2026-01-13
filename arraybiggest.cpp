#include <iostream>
using namespace std ;

int main()
   {
    int n;
  
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout<< "Enter array element: \n";
    for(int i = 0; i<n; i++) { 
        cin >> arr[i];
    }

    int biggest = arr[0];

    for (int i=1; i < n; i++){
        if ( arr[i] > biggest) {
            biggest = arr[i];
        }
    }
    cout <<"Biggest number  is : " << biggest ;

    return 0;
   }