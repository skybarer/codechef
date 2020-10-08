#include <bits/stdc++.h>

#include <iostream>
#include <string>
using namespace std;
#define endl "\n"

void fastIo() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve() {
    int n;
    string nationality;
    cin >> n >> nationality;

    int laddus = 0;

    for (int i = 0; i < n; i++) {
        string type;
        cin >> type;

        if (type == "CONTEST_WON") {
            int rank;
            cin >> rank;

            laddus += 300;
            if (rank <= 20) {
                laddus += 20 - rank;
            }

        } else if (type == "TOP_CONTRIBUTOR") {
            laddus += 300;
        } else if (type == "BUG_FOUND") {
            int severity;
            cin >> severity;
            laddus += severity;
        } else if (type == "CONTEST_HOSTED") {
            laddus += 50;
        } else {
            assert(false);
        }
    }

    int months = 0;
    if (nationality == "INDIAN") {
        months = laddus / 200;
    } else {
        months = laddus / 400;
    }

    cout << months << endl;
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