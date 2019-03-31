#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
ll cnt,ans;
int even,odd;
int fr[(int)3e5];
int main()
{
      cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);
      int n;
      bool flag = true;
      cin>>n;
      int x[n];
      loop(n){
      cin>>x[i];
      fr[x[i]]++;
      if(fr[x[i]]==3){
        flag = false;
      }
      if(fr[x[i]]==2)cnt++;
}

      if(flag == false){
        cout<<"NO";
        return 0;
      }
      sort(x,x+n);
       cout<<"YES"<<endl;
      if(cnt==0){
        cout<<n<<endl;
        loop(n){
        cout<<x[i]<<" ";
        }
        cout<<endl;
        cout<<0<<endl;
      }
      else {
             cout<<n-(n-cnt)<<endl;
              loop(n){
                if(fr[x[i]]==2){
                        cout<<x[i]<<" ";
                        fr[x[i]]=4;
                }
              }
               cout<<endl;
               reverse(x,x+n);
         cout<<(n-cnt)<<endl;
          loop(n){
              if(fr[x[i]]==4){
                fr[x[i]] = 3;
                cout<<x[i]<<" ";
              }
             else if(fr[x[i]]!=3&&fr[x[i]]==1)
              cout<<x[i]<<" ";
          }
        }

      }







