#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
using namespace std;
const int pre = 3e3+5;
int arr[pre];
int cnt;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    int p,q,l,r;
    cin>>p>>q>>l>>r;
    vector<pair<int,int> >z(p);
    for(int i=0;i<p;i++){
        cin>>z[i].first>>z[i].second;
    }
  int  ii=-1;
    int rem1,rem2;
    while(q--){
        int x,y;
        cin>>x>>y;
        ii = -1;
        int w = p;
        while(w--){
                 ++ii;
        for(int i=l;i<=r;i++){
            rem1=x+i,rem2=y+i;
            if(rem1>=z[ii].first&&rem1<=z[ii].second||rem2>=z[ii].first&&rem2<=z[ii].second||rem1<=z[ii].first&&rem2>=z[ii].second)
                arr[i]++;

        }
        }

    }
    loop(2002){
    if(arr[i]>0)cnt++;
    }
    cout<<cnt;
    }
