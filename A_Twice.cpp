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
            mp[a[i]]++;
        }
        ll sum = 0;
        for (auto u : mp) {
            sum = sum + (u.second / 2);
        }
        cout << sum << endl;

    }
}