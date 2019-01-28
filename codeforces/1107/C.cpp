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
int n,h,cnt=0;ll sum=0;
cin>>n>>h;
pair<int, char>x[n];
loop(n){
cin>>x[i].first;
}
string y;
cin>>y;
loop(n){
x[i].second=y[i];
}
loop(n){
if((i+1)!=n&&x[i].second==x[i+1].second){
    int j =i+1,l=i,r=i,k=i;
    while(j!=n&&x[k].second==x[j].second)
    {
        r++;
        i++;j++;
    }
    sort(x+l,x+r+1);
    reverse(x+l,x+r+1);
    int q = r-l+1;
    if(q>h){
      int w = q-h;int u;
      for(int i =r-w+1,u=0;;i++)
      {
         x[i].first=0;
         u++;
         if(u==w)break;
      }
    }
}
}
loop(n){
sum+=x[i].first;
}
cout<<sum;
}

