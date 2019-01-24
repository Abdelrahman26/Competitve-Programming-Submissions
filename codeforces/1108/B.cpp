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
 int a,j=0;
 bool q[10008];
int main()
{
cin.tie(0);
cin.sync_with_stdio(0);
int n;
cin>>n;
int x[n];
vector<int>p;
loop(n)cin>>x[i];
sort(x,x+n);
a = x[n-1];
int b;
for(int i=n-1;i!=-1;i--){
    if(a%x[i]!=0){
        b= x[i];
         cout<<a<<" "<<b;
         return 0;
    }
}
loop(n){
    if(a%x[i]==0&&q[x[i]]==false){
        q[x[i]]=true;
    }
    else{
         p.push_back(x[i]);
    }
}
sort(p.begin(), p.end());
//if(x[n-1]==x[n-2])
//cout<<x[n-1]<<" "<<x[n-1];
 cout<<a<<" "<<p[p.size()-1];
}
