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
    int cnt,m_x = 0;
    int main(){
   int n;
   cin>>n;
   int x[n];
   loop(n)cin>>x[i];
    int q = -1;
   loop(n){
   if(x[i]>q)q=x[i];
   }
   int rem=0;
   loop(n){
   if(x[i]==q){rem++;
   cnt =max(cnt,rem);
   }
   else {
    cnt =max(cnt,rem);
    rem = 0;
   }
   }

     cout<<cnt;
    }
