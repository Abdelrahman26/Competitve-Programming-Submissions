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
      int n;
      cin>>n;
      int x[n];
      loop(n)cin>>x[i];
      int y[n];
      loop(n)y[i]=0;
      loop(n){
      if(i==0)y[i]=x[i];
      else {
        if(x[i]==1){
            if(x[i-1]==1){
                y[i] = y[i-1] + 1;
            }
            else {
                y[i] = 1;
            }
        }
        }
        int ut = 0;
       if(i==n-1&&x[n-1]==1){
        if(x[0]==1){
            for(int j=0;x[j]==1;j++)
                ut++;
        }
        y[n-1] += ut;
       }
      }
      int t =0;
     int r =  *max_element(y,y+n);
     if(x[0]==1&&x[n-1]==1)t = 2;
     int q = max(r,t);
     cout<<q;





}



