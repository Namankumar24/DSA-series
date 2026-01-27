
#include <iostream>
using namespace std;

int fact(int x) {
    int f = 1;
    for(int i = 1; i <= x; i++)
        f *= i;
    return f;
}

int main() {
    int n, temp, sum = 0;
    cin >> n;
    temp = n;

    while(n > 0) {
        int d = n % 10;
        sum += fact(d);
        n /= 10;
    }

    if(sum == temp)
        cout << "Strong Number";
    else
        cout << "Not Strong Number";
}
