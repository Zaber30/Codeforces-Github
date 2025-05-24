#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, i, j, k;
        cin >> n;
        ll a[n+1],ev=0,od=0,temp=0,temp1=0,pos=0;
        for (i = 0; i <n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                ev++;
                temp = a[i];
            }
            else {
                od++;
                
            }
        }
        sort(a, a + n);
        for (i = 0; i < n; i++) {
            if (a[i] % 2 == 1) {
                temp1 = a[i];
                pos = i;
            }
        }
        if (ev == n || od == n) {
            cout << 0 << endl;
            continue;
        }
        ll sum = temp1;
        /*if (temp1>temp) {
            cout << (n - od) << endl;
            
        }
        else {
            cout << (n - od + 1) << endl;
        }*/
        if (a[n - 1] % 2 == 1) {
            cout << ev << endl;
            continue;
        }
        ll thi = pos;
        pos--;
        ll cnt = 0;
        while (pos >= 0) {
            if (a[pos]%2 == 0) {
                cnt++;
                sum = sum + a[pos];
            }
            pos--;
        }
       ll flag =0;
        for (i = thi + 1; i < n; i++) {
            if (sum > a[i] && a[i] % 2 == 0) {
                cnt++;
                sum = sum + a[i];
                continue;
            }
            else {
                flag = 1;
                break;
            }

        }
        if (flag == 1) {
            cout << ev + 1 << endl;
        }
        else {
            cout << min(cnt, ev + 1) << endl;
        }


    }
}