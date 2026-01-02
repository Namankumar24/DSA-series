#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p, r, t, ci;
    cout << "Enter principal, rate and time: ";
    cin >> p >> r >> t;
    ci =p * pow((1 + r / 100), t)-p;
    cout << "Compound Interest: " << ci;
    return 0;
}

