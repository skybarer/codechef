#include <bits/stdc++.h>

#include <iostream>
using namespace std;
#define endl "\n"

void fastIo() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

bool isPrime(long num) {
    if (num < 2) return false;
    if (num == 2) return true;

    bool isPnum = 1;
    for (long i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPnum = 0;
            break;
        }
    }
    return isPnum;
}

void solve() {
    long a, b;
    cin >> a >> b;

    for (long i = a; i <= b; i++) {
        if (isPrime(i)) cout << i << endl;
    }
}

int main() {
    //  for fast io operations
    fastIo();

    int testCases;
    cin >> testCases;

    while (testCases--) {
        solve();
        cout << endl;
    }
}