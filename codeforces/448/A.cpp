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
      int a1,a2,a3,b1,b2,b3;
      cin>>a1>>a2>>a3>>b1>>b2>>b3;
      int n;
      cin>>n;
      int sum = a1+a2+a3;
      int sum2= b1+b2+b3;
      if(sum%5)sum =(sum/(5))+1;
      else sum/=5;
      if(sum2%10)sum2=(sum2/(10))+1;
      else sum2/=10;
      if(sum+sum2<=n)cout<<"YES";
      else cout<<"NO";


}
