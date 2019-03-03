#include <iostream>
    #include <bits/stdc++.h>
   // #include "testlib.h"
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
    int idx;
    int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
 int n;
 cin>>n;
 int x[n];
 loop(n)cin>>x[i];
  map<int,int>mp;
 for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        mp[x[i]+x[j]]++;
      idx = max(idx,mp[x[i]+x[j]]);
    }
 }
 cout<<idx;
    }





