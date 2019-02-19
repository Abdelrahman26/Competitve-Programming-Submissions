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
   int q;
   cin>>q;
   while(q--){
   ll n,a,b;
   cin>>n>>a>>b;
   if((a)>b/2){
    cnt = (n/2)*b + (n%2)*a;
   }
   else
    {cnt = n*a;}
    cout<<cnt<<endl;
    cnt = 0;
   }

   }

