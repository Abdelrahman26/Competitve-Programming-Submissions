#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
ll cnt,ans;
int fr [(int)2e5];
int main()
{
      cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);
      int n;
      cin>>n;
      int x[2*n];
      loop(2*n)cin>>x[i];
      for(int i=0;i<2*n;i++){
        if(fr[x[i]]==0){
            fr[x[i]]=1;
            cnt++;
            ans = max(ans,cnt);
        }
        else cnt--;
      }
      cout<<ans;

       }







