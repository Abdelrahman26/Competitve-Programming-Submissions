#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;

using namespace std;
int cnt;
int main()
{
      cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);
      int n,x;
      cin>>n>>x;
      for(int i=1;i*i<=x;i++){
        if(x%i==0)
            if(i<=n&&x/i <=n){
                if(i==x/i)cnt++;
                else cnt +=2;
            }
      }
      cout<<cnt;


}
