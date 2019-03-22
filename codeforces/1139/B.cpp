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
      ll cnt = 0;int rem  = 0;
      cin>>n;
      int x[n];
      loop(n)cin>>x[i];
      rem = x[n-1];
      cnt += x[n-1];
      for(int i=n-2;i!=-1&&rem!=1;i--){
        if(x[i]<x[i+1]){
            int v = min((rem-1),x[i]);
            cnt += v;
            rem = v;
        }
        else {
            cnt += rem - 1;
              rem--;
        }
      }
       cout<<cnt;




}



