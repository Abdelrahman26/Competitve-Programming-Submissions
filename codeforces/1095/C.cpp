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
      int n,k;
      cin>>n>>k;
      int sum = k;
      int x[k];
      fill(x,x+k,1);
      for(int i=0;i<k;i++){
        while(sum+x[i]<=n){
            sum+=x[i];
            x[i] *=2;
        }
      }
      if(sum==n){
        cout<<"YES"<<endl;
        for(int i=0;i<k;i++){
            cout<<x[i]<<" ";
        }
      }
        else cout<<"NO";



}
