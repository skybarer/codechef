#include <iostream>
#include <map>
#include <string>
using namespace std;
#define endl "\n"

void solve(string s) {
    map<char, int> map1;
    map<char, int> map2;
    int countOddOnes = 0;
    int n = s.length();

    for (int i = 0, j = n - 1; i < (n / 2); i++, j--) {
        map1[s[i]]++;
        map2[s[j]]++;
    }

    if (map1 == map2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string s;
        cin >> s;
        solve(s);
    }
}