#include<bits/stdc++.h>
using namespace  std;
using ll = long long;


int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, i, j, k;
        cin >> n;

        if (n <= 4) {
            cout << -1 << endl;
            continue;
        }
        else if(n==5) {
            cout << 1 << " " << 3 << " " << 5 << " " << 4 << " " << 2 << endl;
        }
        else {
            cout << 1 << " ";
            for (i = 5; i <= n; i = i + 2) {
                cout << i << " ";
            }
            cout << 3 << " ";
            cout << 6 << " ";
            for (i = 2; i <= n; i=i+2) {
                if (i != 6) {
                    cout << i << " ";
                }
            }
            cout << endl;
        }

    }
}
