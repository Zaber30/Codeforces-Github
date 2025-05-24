#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, i, j, k;
        cin >> n;
        string s;
        cin >> s;
        ll cnt = 0,cnt1=0;
        ll temp;
        for (i = 0; i < n; i++) {
            if (s[i] == 'p') {
                cnt++;
                temp = i + 1;
                break;

            }
        }
        for (i = temp; i < n; i++) {
            if (s[i] == 's') {
                cnt++;
                break;
            }
        }
        for (i = 1; i < n - 1; i++) {
            if (s[i] == 's') {
                cnt1++;
                temp = i + 1;
                break;
            }
        }
        for (i = temp; i < n - 1; i++) {
            if (s[i] == 'p') {
                cnt1++;
                break;
            }
        }
        if (cnt1 == 2 || cnt == 2) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }

    }
}