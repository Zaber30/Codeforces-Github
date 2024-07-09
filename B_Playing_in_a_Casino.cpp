#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll mod=1e5;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int N, M;
    cin >> N >> M;
    vector<vector<ll>>v(M, vector<ll>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> v[j][i];
        }
    }
    ll ans = 0;
    for (ll j = 0; j < M; j++) {
        sort(v[j].begin(), v[j].end());

        for (ll i = 0; i < N; i++) {
            ans += (i * v[j][i]) -( (N-i-1)*v[j][i]);

        }
    }
    cout << ans << "\n";
    }
}
