#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
ll cnt,ans;
int even,odd;
int main()
{
      cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);
      int n;
      cin>>n;
      int x[n];
      loop(n){cin>>x[i];
      if(x[i]%2==0)even++;
      else odd++;
      }
      sort(x,x+n);
      if(even==odd||(abs(even-odd)==1)){
         cout<<0;
         return 0;
    }
    int q = (abs(even-odd)) - 1;
    int m = 0;
    if(even>odd){
           for(int i=0;i<n&&m!=q;i++){
                if(x[i]%2==0){cnt +=x[i];
                m++;}
    }
        }
        else {
               for(int i=0;i<n&&m!=q;i++){
                if(x[i]%2!=0)cnt+=x[i];
                m++;
    }
        }
        cout<<cnt;


}







