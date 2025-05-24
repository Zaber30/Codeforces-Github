#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k, i, j;
        cin >> n >> k;
        if (k % 2 == 0) {
            vector<ll>v;
            v.push_back(1);
            v.push_back(k);
            if (k + 1 <= n) {
                v.push_back(k + 1);
            }
            cout << v.size() << endl;
            for (i = 0; i < v.size(); i++) {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else {
            if (n == 1) {
                cout << 1 << endl;
                cout << 1 << endl;
            }
            else {

                if (k + 1 < n && k - 1 > 1) {
                    vector<ll>v;
                    v.push_back(1);
                    v.push_back(k - 1);
                    v.push_back(k + 2);
                    sort(v.begin(), v.end());
                    cout << v.size() << endl;
                    for (i = 0; i < v.size(); i++) {
                        cout << v[i] << " ";
                    }
                    cout << endl;
                }
                else {
                    cout << -1 << endl;
                }
            }
        }
    }
}