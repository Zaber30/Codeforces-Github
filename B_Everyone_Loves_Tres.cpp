#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll i;
        if (n <= 3 && n % 2 == 1) {
            cout << -1 << endl;
            continue;
        }
        
        if (n % 2 == 0) {
            for (i = 0; i < n-2; i++) {
                cout << 3;
            }
            cout << 66;
            cout << endl;
        }
        else {
            for (i = 1; i <= (n - 4); i++) {
                cout << 3;
            }
            cout << 6366 << endl;
        }

    }
}