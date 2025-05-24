#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, i, j, k;
        cin >> n;
        ll a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll temp, sum = 0, temp1, cnt = 0;
        ll mi = INT_MAX;
        for (i = 0; i < n; i++) {
            temp = a[i];
            j = i - 1;
            while (j >= 0) {
                if (a[j] < temp) {
                    cnt++;
                }
                else if(a[j]>temp) {
                    temp = a[j];
                    cnt = 0;
                }
                j--;
            }
            j = i + 1;
            while (j < n) {
                if (a[j] > temp) {
                    cnt++;
                }
                j++;
            }
            mi = min(cnt, mi);
            cnt = 0;

        }
        cout << mi << endl;
    }
}