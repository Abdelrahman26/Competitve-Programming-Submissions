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
      int t;
      cin>>t;
      while(t--){
        int n,k,m;
        cin>>n>>k;
        m = n/k;
        for(int i=0;i<k;i++){
            for(int j=0;j<m;j++){
                cout<<(char)(i+97);
            }
        }
        if(m*k!=n){
            for(int i=0;i<(n-(m*k));i++){
                 cout<<(char)(i+97);
            }
        }
          cout<<endl;
      }

}
