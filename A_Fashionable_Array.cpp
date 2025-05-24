#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, j, k;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        int odd=0,even=0;
        for (i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                odd++;
            }
            else {
                break;
            }
        }
        for (i = n - 1; i >= 0; i--) {
            if (a[i] % 2 == 0) {
                odd++;
            }
            else {
                break;
            }
        }
        for (i = 0; i < n; i++) {
            if (a[i] % 2!=0) {
                even++;
            }
            else {
                break;
            }
        }
        for (i = n - 1; i >= 0; i--) {
            if (a[i] % 2!= 0) {
                even++;
            }
            else {
                break;
            }
        }
        cout << min(odd, even) << endl;
    }
}