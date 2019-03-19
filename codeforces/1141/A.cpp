#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
int convertto_int(string x){
stringstream geek(x);
int q = 0;
geek >> q;
return q;
}
int main()
{
      cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);
      int n,m,t,cnt=0;
      cin>>n>>m;
      if(m%n==0){
        if(m==n)cout<<0;
        else {
            t = m/n;
            for(int i=0;t!=1;i++){
                if(t%2==0)t/=2;
                else if(t%3==0) t/=3;
                else {
                    cout<<-1;
                    return 0;
                }
                cnt++;
            }
            cout<<cnt;
        }
      }
    else cout<<-1;




}



