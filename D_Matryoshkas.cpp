#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, i, j, k;
        cin >> n;
        map<ll, ll>mp;
        for (i = 0; i < n; i++) {
            ll temp;
            cin >> temp;
            mp[temp]++;
        }
        ll cnt = 0;
        for (auto u : mp) {
            while (mp[u.first] >= 1) {
                ll temp1 = u.first;
                while (mp[temp1] >= 1) {
                    mp[temp1]--;
                    temp1++;
                }
                cnt++;

            }

        }
        cout << cnt << endl;
    }
}