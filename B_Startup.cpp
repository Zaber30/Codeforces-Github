#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k, i, j, m;
        cin >> n >> k;
        map<ll, ll>mp;
            for (i = 0; i < k; i++) {
                ll temp, temp1;
                cin >> temp >> temp1;
                mp[temp] += temp1;
            }
            vector<ll>v;
            for (auto u : mp) {
                v.push_back(u.second);
            }
            sort(v.begin(), v.end(), greater<ll>());
            ll sum = 0;
            for (i = 0; i < v.size() && i < n; i++) {
                sum = sum + v[i];
            }
            cout << sum << endl;

    }
}