#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// ll gcd(ll a, ll b) {
//     return b ? gcd (b, a % b) : a;
// }

ll gcd(ll a, ll b) {
    while(b) {
        a %= b;
        swap(a, b);
    }
 return a;
}

int main() {
    int tc; cin >> tc;

    while(tc--) {
        ll a, b; cin >> a >> b;
        ll g = gcd(a, b);
        cout << g << " "<< (a/g)*b << endl;
        // cout << a << " " << b << endl;    
    }
}