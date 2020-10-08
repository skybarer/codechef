#include <cmath>
#include <iostream>
using namespace std;
#define endl "\n"

void numRev(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    cout << rev << endl;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int num;
        cin >> num;
        numRev(num);
    }
}