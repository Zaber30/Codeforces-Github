#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, i;
        cin >> n;
        ll a, b, mx = 0, mx1 = 0;
        for (i = 0; i < n; i++) {
            cin >> a >> b;
            mx = max(a, mx);
            mx1 = max(b, mx1);
        }
        cout << (2 * (mx + mx1)) << endl;
    }
}