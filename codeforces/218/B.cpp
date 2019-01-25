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
priority_queue<int>p1;
priority_queue<int, vector<int>, greater<int> >p2;
int n,m,o;
cin>>n>>m;
loop(m){
cin>>o;
p1.push(o);
p2.push(o);
}
int max=0,rem,rem2,min=0;
loop(n){
rem = p1.top();
rem2= p2.top();
max+=rem;
min+=rem2;
p1.pop();
p1.push(rem-1);
p2.pop();
if(rem2-1!=0)
p2.push(rem2-1);
}
cout<<max<<" "<<min;

}
