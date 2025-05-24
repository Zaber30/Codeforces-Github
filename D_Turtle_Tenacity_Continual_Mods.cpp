#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, i, j, k,pass=0;
        cin >> n;
        ll a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        if (a[0] != a[1]) {
            cout << "YES" << endl;
        }
        else {
            for (i = 1; i < n; i++) {
                if (a[i] % a[0] != 0) {
                    pass = 1;
                    break;
                }
            }
            if (pass == 1) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
}