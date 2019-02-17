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
      int n,k;
     ll cnt,m_x = 0;
     bool check_value(vector< pair<int,int> >x,ll value);
    int main(){
    cin>>n>>k;
    vector< pair<int,int> >x(n,make_pair(0,0));
    for(int i=0;i<n;i++) cin>>x[i].first;
    for(int i=0;i<n;i++) cin>>x[i].second;
    ll l=1,r=2*1e9;
    int w = k;
    loop(n){
    if(x[i].second<x[i].first)
    if(x[i].second+w<x[i].first){
            cout<<0;
    return 0;
    }
    else w-= x[i].first - x[i].second;
    }
    while(l<r){
       ll mid = l+(r-l+1)/2;
        bool q = check_value(x,mid);
        if(q==true)l=mid;
        else r = mid-1;
    }
    cout<<r;
         }
         bool check_value(vector< pair<int,int> >x,ll value){
             int v = k;
             for(int i=0;i<n;i++){
                if(value*x[i].first<=x[i].second){}
                else if(value*x[i].first<=x[i].second+v){
                    int m =  value*x[i].first - x[i].second;
                    v -= m;
                }
                else return false;
         }
         return true;
         }

