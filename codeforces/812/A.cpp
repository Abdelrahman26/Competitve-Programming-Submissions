#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;

using namespace std;
ll cnt,ans,even,k,odd,m_n=(int)1e10;
int main()
{
      cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);
      int x[5][5];
      for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            cin>>x[i][j];
        }
      }
      if(x[1][4]==1)
      {
         if(x[1][1]==1||x[1][2]==1||x[1][3]==1||x[2][1]==1||x[4][3]==1||x[3][2]==1)return cout<<"YES" ,0;
      }
       if(x[2][4]==1)
      {
          if(x[2][1]==1||x[2][2]==1||x[2][3]==1||x[3][1]==1||x[1][3]==1||x[4][2]==1)return cout<<"YES" ,0;
      }
      if(x[3][4]==1)
      {
      if(x[3][1]==1||x[3][2]==1||x[3][3]==1||x[4][1]==1||x[2][3]==1||x[1][2]==1)return cout<<"YES" ,0;
      }
      if(x[4][4]==1)
      {
         if(x[4][1]==1||x[4][2]==1||x[4][3]==1||x[1][1]==1||x[3][3]==1||x[2][2]==1)return cout<<"YES" ,0;

      }
      cout<<"NO";

}
