
#include<iostream>
using namespace std;

int main() {

    int sum=0,n;

    cout<<"Enter size of Array :- "<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter elements of the Array :- "<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"Array elements are :- \n"<<sum;

    return 0;

}