#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
#define LCM(a,b) (a*b)/__gcd(a,b)
typedef long long ll;
using namespace std;
using namespace std;
ll cnt,ans;
int main()
{
 cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);
      int n,b,a,rem;
      cin>>n>>b>>a;
      rem = a;
      int x[n];
      loop(n)cin>>x[i];
      for(int i=0;i<n;i++){
        if(x[i]){
            if(b){
               if(a<rem){ a++; b--;}
               else if(a) a--;
               else { a++; b--;}
                cnt++;
            }
            else if(a){
                a--;
                cnt++;
            }
        }
        else {
            if(a){
                cnt++;
                a--;
            }
            else if(b){
                cnt++;
                b--;
            }
        }
      }
       cout<<cnt;

}
