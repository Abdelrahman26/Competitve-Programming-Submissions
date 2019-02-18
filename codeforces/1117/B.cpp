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
   int n,m,k;
   cin>>n>>m>>k;

   int x[n];
   loop(n)cin>>x[i];
   sort(x,x+n);
   int q = x[n-1];
   int w = x[n-2];
   int A = m/(k+1);
   int b = m%(k+1);
   cnt = (ll)q*k*A + (ll)w*A + (ll)b*q;
   cout<<cnt;
   }

