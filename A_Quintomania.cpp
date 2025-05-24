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
        ll flag = 0;
        for (i = 0; i < n - 1; i++) {
            ll temp = abs(a[i] - a[i + 1]);
            if (temp == 5 || temp == 7) {
                continue;
            }
            else {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
}