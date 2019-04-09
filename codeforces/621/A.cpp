#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;

using namespace std;
ll cnt,even,odd,m_n=(int)1e10;
int main()
{
      cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);
      int n;
      cin>>n;
      int x[n];
      for(int i=0;i<n;i++){
            cin>>x[i];
        if(x[i]%2==0)even += x[i];
        else {
            odd+=x[i];
            if(x[i]<m_n)m_n=x[i];
        }
      }
      if(odd%2==0)cout<<even + odd;
      else cout<<(even + odd - m_n);


}
