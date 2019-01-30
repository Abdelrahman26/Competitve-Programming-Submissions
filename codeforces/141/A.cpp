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
 string x,y,z;
int main()
{
cin.tie(0);
cin.sync_with_stdio(0);
map<int,int>mp;
map<int,int>mp2;
cin>>x>>y>>z;
loop(x.size())
mp[x[i]]++;
loop(y.size())
mp[y[i]]++;
loop(z.size())
mp2[z[i]]++;
for(int i=65;i<=90;i++){
if(mp[i]!=mp2[i]){
    cout<<"NO";
    return 0;
}
}
cout<<"YES";




}


