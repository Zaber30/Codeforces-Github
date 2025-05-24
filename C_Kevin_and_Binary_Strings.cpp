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
        ll temp = -1;
        string s1 = "";
        
        for (i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                temp = i;
                break;
            }
        }
        if (temp == -1) {
            cout << 1 << " " << s.size() << " " << s.size() << " " << s.size() << endl;
        }
        else {
            
            for (i = temp; i < s.size(); i++) {
                s1 = s1 + s[i];
            }
            ll temp1 = s.size() - temp;
            ll sum1 = 0,sub1=0;
            ll l1 = 1, r1 = temp1;
            for (i = 0; i <= (s.size() - temp1); i++) {
                ll temp2 = temp1, sum = 0, k = 0;
                for (j = i; j < i + temp1; j++) {
                    if (s1[k] != s[j]) {
                        sum = sum + 1;
                    }
                    else {
                        break;
                    }

                    temp2--;
                    k++;
                }
                if (sum > sum1){
                    l1 = i;
                    r1 = i + temp1;
                    sum1 = sum;
                }
            }
            
            cout << 1 << " " << s.size() << " " << l1+1 << " " << r1 << endl;

        }
    }
}