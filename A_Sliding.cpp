#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, m, r, c;
        cin >> n >> m >> r >> c;
        ll sum = 0;
        sum = sum + (m - c);
        sum = sum + ((n - r) * (m - 1));
        sum = sum + (((m - 1) + 1) * (n - r));
        cout << sum << endl;
    }
}