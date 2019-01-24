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
string x;
cin>>x;
stack<char>s;
char y[x.size()];
strcpy(y, x.c_str());
loop(sizeof(y)){
    if(!s.empty()){
        if(s.top()==y[i])s.pop();
        else s.push(y[i]);
    }
    else s.push(x[i]);
}
string a="";
int w = s.size();
loop(w){
   a+=s.top();
          s.pop();
    }
     reverse(a.begin(), a.end());
    cout<<a;
}
