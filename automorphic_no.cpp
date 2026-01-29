
#include <iostream>
using namespace std;

int main() {
    int n, sq;
    cin >> n;
    sq = n * n;

    int temp = n;
    while(temp > 0) {
        if(temp % 10 != sq % 10) {
            cout << "Not Automorphic";
            return 0;
        }
        temp /= 10;
        sq /= 10;
    }

    cout << "Automorphic Number";
}
