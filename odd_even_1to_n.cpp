#include <iostream> 
using namespace std;

int main() {

    int n;

    cout<<"Enter N value : "<<endl;
    cin>>n;

    cout<<"\nEven numbers between 1 and "<<n <<" are : \n";

    for(int i =1; i <= n; i++) {

        if ( i % 2 == 0) {
            cout<<i<<" "<<endl;
        }
    }

    cout<<"\n\nOdd number between 1 and "<<n<<" are : \n";

    for(int i =1; i <= n; i++) {

        if(i % 2 != 0) {

            cout<<i<<" ";
        }
    }

    return 0;
}