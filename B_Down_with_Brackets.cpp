#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int i, j, k;
        cin >> s;
        int cnt = 0, lnt = 0, ans = 0;
        for (i = 0; i < s.size(); i++) {
            if (s[i] == '(')
            {
                cnt++;
            }
            else {
                lnt++;
            }
            if (cnt == lnt) {
                ans++;
                cnt = 0, lnt = 0;
            }
        }
        if (cnt == lnt && cnt != 0 && lnt != 0) {
            ans++;
        }
        if (ans >= 2) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}