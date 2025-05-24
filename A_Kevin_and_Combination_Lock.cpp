#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        string s;
        ll i, j, k;
        cin >> s;
        string s1 = "0";
        for (i = 0; i < s.size(); ) {
            if (s[i] == '3' && s[i + 1] == '3'&&(i+1)<s.size()) {
                i = i + 2;
            }
            else {
                s1 = s1 + s[i];
                i++;
            }
        }
        auto it = stoi(s1);
        if (it % 33 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}