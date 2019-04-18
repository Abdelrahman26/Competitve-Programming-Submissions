#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
#define LCM(a,b) (a*b)/__gcd(a,b)
typedef long long ll;
using namespace std;
using namespace std;
int main()
{
 cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);
      int n=4;
      int x[n];
      loop(n)cin>>x[i];
      sort(x,x+n);
      int w = x[n-1];
      for(int i=0;i<3;i++){
        cout<<w-x[i]<<" ";
      }
}
