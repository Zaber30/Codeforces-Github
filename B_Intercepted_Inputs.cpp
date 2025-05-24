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
        ll temp = n - 2;
        ll pi = -1, pi1 = -1;
        for (i = 0; i < n; i++) {
            pi = a[i];
            mp[a[i]]--;
            if (temp % a[i] == 0) {
                if (mp[temp / a[i]] >= 1) {
                    pi1 = temp / a[i];
                    break;
                }
            }
        }
        cout << pi << " " << pi1 << endl;

    }
}