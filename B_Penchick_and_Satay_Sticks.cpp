
#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n,i;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll flag = 0;
        for (i = 0; i < n-1; i++) {
            if (a[i] == (i + 1)) {
                continue;
            }
            else if (a[i + 1] == (i + 1)&&abs(a[i+1]-a[i])==1) {
                swap(a[i], a[i + 1]);
            }
            else {
                flag = 1;
                break;
            }

        }
        
        if (flag == 1) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
   
}