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
       int freq[100008]={0};
      int n;
      cin>>n;
      int x[n];
      loop(n)cin>>x[i];
      sort(x,x+n);
      loop(n)freq[x[i]]++;
      if(n==2)cout<<0;
      else
        cout<<min((x[n-2]-x[0]),(x[n-1]-x[1]));


}
