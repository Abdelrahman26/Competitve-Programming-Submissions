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
int q;
cin>>q;
loop(q){
int l,r,l2,r2;
cin>>l>>r>>l2>>r2;
if(l2!=l)cout<<l<<" "<<l2<<endl;
else cout<<l<<" "<<r2<<endl;
}
}
