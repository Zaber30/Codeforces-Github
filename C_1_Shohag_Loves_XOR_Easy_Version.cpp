#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll x, m;
        cin >> x >> m;


        ll o = (x * 2) + 1;
        ll temp1 = min(o, m);

        ll cnt = 0;


        for (ll i = 1; i <= temp1; i++) {

            ll temp = i ^ x;


            if (temp!=0&&(x % temp == 0 || i % temp == 0)) {
                cnt++;
            }
        }


        cout << cnt << endl;
    }
}

