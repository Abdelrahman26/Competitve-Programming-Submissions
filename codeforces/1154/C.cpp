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
      int a,b,c;
      cin>>a>>b>>c;
      cnt = min(min((a/3),(b/2)),(c/2));
      a  -= 3*cnt;
      b  -= 2*cnt;
      c  -= 2*cnt;
      cnt *= 7;
      int x[7] ={1,0,0,1,2,0,2};
      int rem [3]={0};
      if(a>=3)rem[0] = 3; else if(a==2) rem[0] = 2; else if(a==1)rem[0] = 1;
   if(b>0){  if(b>=2)rem[1] = 2; else rem[1] = 1;}
   if(c>0){  if(c>=2)rem[2] = 2; else rem[2] = 1;}
   ll len =0,l;
   int k[3]= {0};
   for(int i=0;i<7;i++){
     for(int p=0;p<3;p++)k[p] = rem [p];
     for(int j=i;j<7;j++){
         l = x[j];
        if(k[l]>0){
            k[l]--;
            len++;
        }
        else {
                break;
        }
        if(j==6)j=-1;
     }
        ans =max(ans,len);
        len = 0;
   }
    cout<<ans+cnt;
}
