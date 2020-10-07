#include <iostream>
using namespace std;

int main() {
    int t, y;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> y;
        if (y == 2010 || y == 2015 || y == 2016 || y == 2017 || y == 2019)
            cout << "HOSTED";
        else
            cout << "NOT HOSTED";
        cout << "\n";
    }
    return 0;
}
