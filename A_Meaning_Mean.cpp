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
        ll temp = ((a[0] + a[1]) / 2);
        for (i = 2; i < n; i++) {
            temp = (temp + a[i]) / 2;
        }
        cout << temp << endl;
    }
}