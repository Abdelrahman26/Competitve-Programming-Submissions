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
int main()
{
    cin.tie(0);
cin.sync_with_stdio(0);
string x;
cin>>x;
stack<char>s;
//char y[x.size()];
//strcpy(y, x.c_str());
loop(x.size()){
    if(!s.empty()){
        if(s.top()==x[i])s.pop();
        else s.push(x[i]);
    }
    else s.push(x[i]);
}
x.clear();
int w = s.size();
loop(w){
   x+=s.top();
            s.pop();
    }
     reverse(x.begin(), x.end());
     cout<<x;
}
