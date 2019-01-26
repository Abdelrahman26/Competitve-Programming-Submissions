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
map<string,int>m;
map<string,int>::iterator it;
cin>>n;
  m["Octahedron"] = 8;
  m["Dodecahedron"] = 12;
  m["Icosahedron"] = 20;
  m["Cube"]        = 6;
  m["Tetrahedron"] = 4;
  loop(n){
  cin>>x;
  sum+=m[x];
  }
  cout<<sum;




}
