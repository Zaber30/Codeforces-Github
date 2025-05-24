#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, i, j, k;
        cin >> n;
        ll a[n*2];
        ll cnt = 0, cnt2 = 0;
        for (i = 0; i < n*2; i++) {
            cin >> a[i];
            if (a[i] == 0) {
                cnt++;
            }
            else {
                cnt2++;
            }
        }
        ll temp = min(cnt, cnt2);
        if (cnt2 % 2 == 1) {
            cout << 1 << " " << temp << endl;
        }
        else {
            cout << 0 << " " << temp << endl;
        }
    }
}