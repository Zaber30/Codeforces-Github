#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        ll a[n + 1], b[q], i, j, k;
        map<ll, ll>mp;
        for (i = 1; i <=n; i++) {
            cin >> a[i];
        }
        for (i = 0; i < q; i++) {
            cin >> b[i];
        }
        for (i = 1; i <=n; i++) {
            if (i == 1) {
                mp[n - 1]++;
            }
            else {
                ll temp = (i - 1) * (n - i + 1);
                ll temp1 = (a[i] - a[i - 1]-1);
                mp[temp] += temp1;
                temp = temp + (n - i);
                mp[temp]++;



            }
        }
        for (ll i = 0; i < q; i++) {
            cout << mp[b[i]] << " ";
        }
        cout << endl;

    }
}