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
        ll cnt = 0, cnt1 = 0;
        for (i = 0; i < n; i++) {
            if (a[i] > 0) {
                cnt++;
            }
            else {
                if (cnt > 0) {
                    cnt = 0;
                    cnt1++;
                }
            }
        }
        if (cnt > 0) {
            cnt1++;
        }
        if (cnt1 == 0) {
            cout << 0 << endl;
        }
        else if (cnt1 >= 2) {
            cout << 2 << endl;
        }
        else {
            cout << 1 << endl;
        }
    }
}