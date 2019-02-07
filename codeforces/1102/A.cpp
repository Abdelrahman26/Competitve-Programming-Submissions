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

int main()
{
cin.tie(0);
cin.sync_with_stdio(0);
cout.tie(0);
int n;
cin>>n;
if((n*(n+1)/2)%2==0)cout<<0;
else cout<<1;

}
