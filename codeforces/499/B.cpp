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
 int n,sum;
int main()
{
cin.tie(0);
cin.sync_with_stdio(0);
string x;
map<string,string>m_;
map<string,string>::iterator it;
int n,m;
cin>>n>>m;
loop(m){
string a,b,c;
cin>>a>>b;
if(a.size()<=b.size())c=a;
else c=b;
m_[a]=c;
}
loop(n){
string h;
cin>>h;
cout<<m_[h]<<" ";
}




}
