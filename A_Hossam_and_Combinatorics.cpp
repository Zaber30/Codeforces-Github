#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, i, j, k;
        cin >> n;
        ll a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        ll mi = a[0];
        ll mx = a[n - 1], cnt1 = 0, cnt2 = 0;
        for (i = 0; i < n; i++) {
            if (a[i] == mi) {
                cnt1++;
            }
            else if (a[i] == mx) {
                cnt2++;
            }
        }
        if (mi == mx) {
            ll x = (n * (n - 1)) / 2;
            cout << x*2 << endl;
        }
        else {
            cout << (2 * cnt1 * cnt2) << endl;
        }
    }
}