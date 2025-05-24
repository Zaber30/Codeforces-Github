#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll n, q;
    cin >> n >> q;
    ll i, j, k;
    map<ll, ll>mp;
    ll a[n + 1];
    for (i = 1; i <= n; i++) {
        cin >> a[i];
        if (mp[a[i]] == 0) {
            mp[a[i]] = i;
        }
    }
    for (i = 1; i <= q; i++) {
        ll temp;
        cin >> temp;
        cout << mp[temp]<<" ";
        for (j = 1; j <= 50; j++) {
            if (mp[j]<mp[temp]) {
                mp[j]++;
            }
        }
        mp[temp] = 1;
    }
}