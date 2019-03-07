#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
int cnt,res,m_x;
int main(){
cin.tie(0);
cin.sync_with_stdio(0);
int n;
cin>>n;
int x[n];
loop(n)cin>>x[i];
sort(x,x+n);
int k=0;
for(int i=0;i<n;i++){
        int j ;
    for( j= k;k!=n&&abs(x[j]-x[i])>5;j=++k ){}
      m_x = abs(j-i) + 1;
      res = max(res,m_x);
}
cout<<res;
       }


