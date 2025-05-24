#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
     ll t;
     cin >> t;
     while (t--) {
         ll n, x, i, j, k, temp1,cnt;
         cin >> n >> x;
         map<ll, ll>mp;
         ll a[n];
         for (i = 0; i < n; i++) {
             cin >> a[i];
             
             mp[a[i]]++;
         }
         i = 0;
         for (i = 0;; i++) {
             if (mp[i] >= 1) {
                 mp[i]--;
                 cnt = mp[i];
                 mp[i + x] = mp[i + x] + cnt;
                 mp[i] = 0;
             }
             else {
                 temp1 = i;
                 break;
             }
         }
         cout << temp1 << endl;
     }
}