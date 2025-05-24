#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    
        ll n, x, y, i, j, k;
        cin >> n >> x >> y;
        ll a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        if ((x - y) >= 1) {
            cout << n << endl;
        }
        else {
            ll cnt = 0;
            sort(a, a + n);
            for (i = 0; i < n; i++) {
                if (a[i] <= x) {
                    cnt++;
                }
            }
            cout << (cnt+2-1)/2<< endl;
        }
    
}