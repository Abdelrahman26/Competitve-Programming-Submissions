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
string x ;
cin>>x;
int cnt=0;
stack<char>s;
loop(x.size()){
if(!s.empty()&&s.top()==x[i]){
        s.pop();
        cnt++;
}
else s.push(x[i]);
}
if(cnt%2!=0)cout<<"YES";
else cout<<"NO";

}
