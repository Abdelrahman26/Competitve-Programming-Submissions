#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
using namespace std;
const int pre = 1e5+5;
int arr[pre];
ll cnt;
ll Px ,Py,step,n,m;
 bool check (ll x,ll y,ll mid);
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cin>>n>>m;
    cin>>Px>>Py;
    ll k,Qx,Qy;
    cin>>k;
    while(k--){
        cin>>Qx>>Qy;
        ll l=0,mid ;
        ll r = 1e9 + 4;
        while(l<=r){
                mid = l+(r-l)/2;
        if(check(Qx,Qy,mid)){
            step = mid;
            l = mid + 1;
        }
        else r = mid - 1;
        }
        cnt += step;
        Px += step*Qx;
        Py += step*Qy;
    }
    cout<<cnt;
}
bool check (ll x,ll y,ll mid){
if(Px+(mid*x)<=n&&Py+(mid*y)<=m&&Px+(mid*x)>0&&Py+(mid*y)>0) return true;
return false;
}
