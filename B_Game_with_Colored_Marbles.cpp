#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, i, j = 0;
        cin >> n;
        ll a[n];
        map<ll, ll>mp, mp1;
        for (i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll cnt = 0, cnt1 = 0;
        for (auto u : mp) {
            if (u.second == 1) {
                cnt++;
            }
            else {
                cnt1++;
            }
        }
       ll sum = 0;
        sum = sum + (((cnt + 2 - 1) / 2) * 2);
        sum = sum + cnt1;
        cout << sum << endl;

    }
}