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
     ll cnt,m_x = 0;
    int main(){
    int n,k;
    cin>>n>>k;
    vector< pair<int,int> >x(n,make_pair(0,0));
    for(int i=0;i<n;i++) cin>>x[i].first;
    for(int i=0;i<n;i++) cin>>x[i].second;
    bool r = false;
    for(int i=0;i<1000000;i++){
            if(r==true)break;
    for(int j=0;j<n;j++){
            if(x[j].second>=x[j].first)x[j].second-=x[j].first;
            else if(x[j].second+k>=x[j].first){
                int m = x[j].first - x[j].second ;
                k -=m;
                x[j].second=0;
            }
            else {
                   cout<<cnt;
                   r = true;
                   break;
            }
        }
        cnt++;
    }
         }

