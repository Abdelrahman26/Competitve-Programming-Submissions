#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
using namespace std;
ll cnt,ans,sum;
int main()
{
      cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);
      int n;
      cin>>n;
      while(n--){
        int x,y,k;
        cin>>x>>y>>k;
        if(k%2==0){
            cout<<(ll)(x-y)*k/2 <<endl;
        }
        else {
            k--;
            cnt = (ll)(x-y)*k/2 + x;
            cout<<cnt<<endl;
        }
      }


}
