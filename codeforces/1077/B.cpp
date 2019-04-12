#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
using namespace std;
ll cnt,ans,sum;
int main()
{
      cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);
      int n;
      cin>>n;
      int x[n];
      int freq[101]={0};
      loop(n)cin>>x[i];
      for(int i=1;i<n-1;i++){
        if(x[i]==0&&x[i-1]==1&&x[i+1]==1){cnt++,freq[i-1]++,freq[i+1]++;
        if(freq[i-1]>1)cnt--,freq[i+1]=0;
        }
      }
         cout<<cnt;



}
