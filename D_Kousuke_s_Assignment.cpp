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
        map<ll, ll>mp;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll cnt = 0, sum = 0;
        for (i = 0; i < n; i++) {
             sum = sum + a[i];
            if (sum == 0 || mp[sum] >=1  || a[i] == 0) {
                cnt++;
                mp.clear();
                sum = 0;
            }
            else {
                mp[sum]++;
            }
        }
        if (mp[sum] > 1) {
            cnt++;
        }
        cout << cnt << endl;
    }
}