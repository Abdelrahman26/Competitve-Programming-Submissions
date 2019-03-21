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
      int cnt = 0;
      cin>>n;
      string x;
      cin>>x;
      char y[x.size()];
      strcpy(y, x.c_str());
      int z[n];
      loop(n)z[i]=0;
      loop(n){
    if(y[i]%2==0)
    {
        cnt+= i;
        cnt+=1;
    }

      }
      cout<<cnt;




}



