#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll l1, r1, l2, r2, flag = 0, i;
        cin >> l1 >> r1 >> l2 >> r2;
        for (i = 1; i <= 50; i++) {
            if (i >= l1 && i <= r1 && i >= l2 && i <= r2) {
                cout << i << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << min(l1, r1) + min(l2, r2) << endl;
        }
    }
}