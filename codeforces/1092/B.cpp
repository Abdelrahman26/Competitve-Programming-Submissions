#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
using namespace std;
ll cnt,ans;
int main()
{
      cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);
      int n;
      cin>>n;
      int x[n];
      loop(n)cin>>x[i];
      sort(x,x+n);
      for(int i=0;i<n;i+=2){
        cnt+=x[i+1]-x[i];
      }
      cout<<cnt;

}
