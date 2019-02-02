#include <iostream>
//#include <bits/stdc++.h>
#include <iomanip>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
//#include<deque>
#include<string>
#include<sstream>
#include <sstream>
#include <algorithm>
#include <map>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
template<typename t>
string itos(t i){
 stringstream s;
 s << i;
 return s.str();
 }

int main()
{
cin.tie(0);
cin.sync_with_stdio(0);
cout.tie(0);
ll n,m;
cin>>n;
ll x[n+1];
ll y[n+1];
for(int i=1;i<=n;i++){
cin>>x[i];
}
x[0] = y[0] = 0;
loop(n+1)y[i]=x[i];
sort(x,x+n+1);
for(int i=1;i<=n;i++){
    x[i] = x[i]+x[i-1];
    y[i] = y[i]+y[i-1];
}
cin>>m;
while(m--){
 ll q,l,r;
 cin>>q>>l>>r;
if(q==1){
cout<<y[r]-y[l-1]<<endl;
}
else cout<<x[r]-x[l-1]<<endl;
}
}


