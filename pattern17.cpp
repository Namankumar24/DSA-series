
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper part
    for(int i = n; i >= 1; i -= 2) {
        for(int s = 1; s <= (n - i) / 2; s++)
            cout << " ";
        for(int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    // Lower part
    for(int i = 3; i <= n; i += 2) {
        for(int s = 1; s <= (n - i) / 2; s++)
            cout << " ";
        for(int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
