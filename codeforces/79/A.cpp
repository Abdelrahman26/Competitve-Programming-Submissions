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
      int x,y;
      cin>>x>>y;
      for(int i=1;;i++){
        if(i%2==1){
            if(x>=2&&y>=2)x-=2,y-=2;
            else if(x>=1&&y>=12)x-=1,y-=12;
            else if(y>=22)y-=22;
            else return cout<<"Hanako",0;
        }
        else {
                if(y>=22)y-=22;
                else if(x>=1&&y>=12)x-=1,y-=12;
                else if(x>=2&&y>=2)x-=2,y-=2;
                else return cout<<"Ciel",0;
        }
      }

}
