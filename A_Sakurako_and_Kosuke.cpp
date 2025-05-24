#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n % 2 == 1) {
            cout << "Kosuke" << endl;
        }
        else {
            cout << "Sakurako" << endl;
        }
    }
}