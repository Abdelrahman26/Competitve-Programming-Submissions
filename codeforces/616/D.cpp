#include <iostream>
#include <bits/stdc++.h>
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
 ll cnt,m_x = 0;
int main(){
  int n,k;
  map<int,int>m;
  set<int>    s;
  scanf("%d%d", &n, &k);
  int x[n];
  loop(n)scanf("%d", &x[i]);
  int  l=0,r=0,ll = 0,rr=0;
  long long sum=0,ans=0;
  while(r<n){
    while(s.size()<=k&&r<n){
        m[x[r]]++;
        s.insert(x[r]);
        sum = r-l+1;
        if (sum>ans&&s.size()<=k){
            rr =r;
            ll =l;
            ans = sum;
        }
        r++;
    }
    m[x[l]]--;
    if(m[x[l]]==0)s.erase(x[l]);
    l++;
  }
  printf("%d %d\n", ll+1, rr+1);
}
