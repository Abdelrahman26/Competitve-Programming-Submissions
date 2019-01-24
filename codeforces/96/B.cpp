#include <iostream>
//#include <bits/stdc++.h>
#include <iomanip>
#include<cmath>
#include<vector>
#include<queue>
//#include<deque>
#include<string>
#include<sstream>
#include <sstream>
#include <algorithm>
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
  int n;
  cin>>n;
  ll value,c;
  queue<pair<ll ,ll> >q;
  q.push(make_pair(0,0));
  while(!q.empty()){
     value = q.front().first;
     c     = q.front().second;
    q.pop();
    if(value>=n&&c==0){
        cout<<value;
        return 0;
    }
    q.push(make_pair(value*10+ 4,c+1));
    q.push(make_pair(value*10+ 7,c-1));
  }
}
