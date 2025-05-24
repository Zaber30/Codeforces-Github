#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
ll pass(ll a[], ll n, ll temp) {
    ll cnt = 0,i;
    for (i = 0; i < n; i++) {
        if (a[i] < temp) {
            cnt++;
        }
        else {
            break;
        }
    }
    return cnt;
}
bool check(ll a[], ll n, ll temp, ll k) {
    ll cnt = 0, sum = 0,i;
    for (i = 0; i < n; i++) {
        if (a[i] < temp) {
            
            sum = sum + a[i];
        }
        else {
            break;
        }
    }
    sum = sum + temp * (n - i);
    if (sum >= k) {
    
        return true;
    }
    else {
        return false;
    }
}
int main() {
   ll t;
   cin >> t;
   while (t--) {
       ll n, k, i, j;
       cin >> n >> k;
       ll a[n];
       for (i = 0; i < n; i++) {
           cin >> a[i];
       }
       ll out = 1e18;
       sort(a, a + n);
       ll l = 0, r = 1e18, mid;
       while (l <= r) {
           mid = l + (r - l) / 2;
           if (check(a, n, mid, k)) {
               r = mid - 1;
               out = min(out, pass(a, n, mid) + k);
           }
           else {
               l = mid + 1;
           }


       }
       cout << out << endl;

   }
}