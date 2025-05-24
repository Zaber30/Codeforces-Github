#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k, i, j;
        cin >> n >> k;
        ll a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        ll sum = 0;
        for (i = n - 1; i >= 0; i--) {
            if (sum + a[i] > k) {
                break;
            }
            else {
                sum = sum + a[i];
            }
        }
        cout << k - sum << endl;
    }
}