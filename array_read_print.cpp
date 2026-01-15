#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter size of the array :- "<<endl;
    cin>>n;

    int arr[n];
    
    cout<<"Enter the elements of thr array : \n "<<endl;

    for(int i=0;i<n;i++) {
    cin>>arr[i];  
    }
    
    cout <<"Array elements are : \n"<<endl;
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}