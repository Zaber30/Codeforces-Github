#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, i, j, k;
        cin >> n >> k;
        ll a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll temp = 1, cnt = 0;
        for (i = 0; i < n; i++) {
            if (a[i] == temp) {
                temp++;
            }
            else {
                cnt++;
            }
        }
        cout << (cnt + k - 1) / k << endl;
    }
}