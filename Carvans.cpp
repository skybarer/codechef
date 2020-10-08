#include <bits/stdc++.h>

#include <iostream>
using namespace std;
#define endl "\n"

void fastIo() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxCarsWithSpeed = 0;
    int speedOfPrevCar = arr[0];

    for (int i = 0; i < n; i++) {
        if (speedOfPrevCar >= arr[i]) {
            maxCarsWithSpeed++;
            speedOfPrevCar = arr[i];
        }
    }

    cout << maxCarsWithSpeed << endl;
}

int main() {
    //  for fast io operations
    fastIo();

    int testCases;
    cin >> testCases;

    while (testCases--) {
        solve();
    }
}