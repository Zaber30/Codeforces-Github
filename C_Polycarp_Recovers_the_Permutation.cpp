#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll n,i;
    cin>>n;
    vector<ll>v(n);
    deque<ll>v1,v2,v3,v4;
    for(i=0;i<n;i++){
        cin>>v[i];
        v1.push_back(v[i]);
    }
    ll left=0,right=0;
    while(v1.size()){
        if(v1.size()==1){
            if(left>=right){
                v2.push_back(v1.front());
                v1.pop_front();
            }
            else if(left<right){
                v2.push_front(v1.front());
                v1.pop_front();
            }

        }
        else{
            ll mi=min(v1.front(),v1.back());
            if(mi==v1.front()){
                left++;
                v2.push_front(mi);
                v1.pop_front();
            }
            else{
                v2.push_back(mi);
                right++;
                v1.pop_back();
            }
        }
    }
    v4=v2;
    left=0,right=0;
    while(v2.size()){
        if(v2.size()==1){
            if(left>=right){
                v3.push_back(v2.front());
                v2.pop_front();

            }
            else if(left<right){
                v3.push_front(v2.front());
                v2.pop_front();
            }

        }
        else{
            ll mi=min(v2.front(),v2.back());
            if(mi==v2.front()){
                left++;
                v3.push_front(mi);
                v2.pop_front();
            }
            else{
                v3.push_back(mi);
                right++;
                v2.pop_back();
            }
        }
    }

    ll flag=0;
    for(i=0;i<v.size();i++){
        if(v[i]!=v3[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"-1"<<endl;
    }
    else{
        for(i=0;i<v4.size();i++){
            cout<<v4[i]<<" ";
        }
        cout<<endl;
    }
    }
}
