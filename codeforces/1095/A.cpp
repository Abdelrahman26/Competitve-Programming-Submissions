#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;

using namespace std;

int main()
{
      cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);
      int n;
      cin>>n;
      string x;
      cin>>x;
      int m =1;
      for(int i=0;i<n;){
        cout<<x[i];
        i+=m;
        m++;
      }


}
