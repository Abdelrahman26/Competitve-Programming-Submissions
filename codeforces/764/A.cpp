#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;

using namespace std;
ll cnt,ans,even,odd,m_n=(int)1e10;
int main()
{
      cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);
      int n,m,z;
      cin>>n>>m>>z;
      for(int i=m;;i+=m){
        if(i%n==0){
            ans = i;
            break;
        }
      }
      cout<<z/ans;


}
