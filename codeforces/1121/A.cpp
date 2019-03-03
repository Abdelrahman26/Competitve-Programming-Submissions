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

    int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int idx = 0;
    int n,m,k;
    cin>>n>>m>>k;
    int power[n];
    loop(n)cin>>power[i];
    int sc[n];
    loop(n)cin>>sc[i];
    int ca[k];
    loop(k)cin>>ca[i];
    pair<int,int> best [m+1];
    for(int i=1;i<=m;i++){
        for(int j=0;j<n;j++){
                if(sc[j]==i)
            if(best[i].first < power[j] ){
               best[i].first = power[j];
               best[i].second= j+1;
            }
        }
    }
    loop(k){
    int index = ca[i];
    if(best[sc[index-1]].second!=index)idx++;
    }
     cout<<idx;


    }





