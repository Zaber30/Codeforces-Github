#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using ll=long long;
#define pi acos(-1);
const ll mod=1e9+7;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x1,y1,x2,y2,flag=0;
        cin>>x1>>y1>>x2>>y2;
        if((x1==1&&y1==1)||(x1==1&&y1==m)||(x1==n&&y1==1)||(x1==n&&y1==m))
        {
            cout<<"2"<<endl;
        }
        else if((x2==1&&y2==1)||(x2==1&&y2==m)||(x2==n&&y2==1)||(x2==n&&y2==m))
        {
            cout<<"2"<<endl;
        }
        else
        {
            if(x1==1||x2==1)
            {
                cout<<"3"<<endl;;
            }
            else if(y1==1||y2==1)
            {
                cout<<"3"<<endl;
            }
            else if((x1==n&&y1!=m)||(x2==n&&y2!=m)||(x1!=n&&y1==m)||(x2!=n&&y2==m))
                    {
                        cout<<"3"<<endl;
                    }
                    else
                        {
                            cout<<"4"<<endl;
                        }
        }



    }
    return 0;
}

