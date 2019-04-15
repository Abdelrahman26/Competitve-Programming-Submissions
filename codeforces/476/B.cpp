#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
#define LCM(a,b) (a*b)/__gcd(a,b)
typedef long long ll;
using namespace std;
ll cnt,ans,sum;
void  Dreamoon(int n,int len);
int ne,p,q,sol;
int main()
{
      cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);
      string x;
      string y;
      int pro = 0;
      cin>>x>>y;
     int n= x.size();
      loop(n)if(x[i]=='+')p++;
      else p--;
      int res = p;
      int rem = 0;
      loop(n){
      if(y[i]=='?')q++;
      else if(y[i]=='+')rem+=1;
      else rem--;
      }
      if(q==0&&rem==res)return   printf("%.12lf\n",(double)1),0;
      else if(q==0&&rem!=res)return   printf("%.12lf\n",(double)0),0;
      int w = pow(2,q);
      for(int i=0;i<w;i++){
            int u = i;
         sol = 0;
         Dreamoon(u,q);
         if(rem+sol==res)pro++;
      }
      double w3 = ((double)pro/w);
           printf("%.12lf\n",w3);
}
void  Dreamoon(int n,int len){
if(!len) return ;
Dreamoon(n>>1,len-1);
 (n&1)? sol++: sol--;

}
