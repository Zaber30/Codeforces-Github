#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, i, j, k;
        cin >> n >> k;
        
        ll temp = n / k;
        ll temp1 = n % k;
        ll temp2 = n;
        ll l = 1;
        vector<ll>v;
        for (i = 0; i < temp; i++) {
            for (j = 0; j < k - 1; j++) {
                v.push_back(temp2);
                temp2--;
            }
            v.push_back(l);
            l++;

        }
        for (i = 0; i < temp1; i++) {
            v.push_back(temp2);
            temp2--;
        }
        for (i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}