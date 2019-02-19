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
   int n;
   cin>>n;
   n++;
   int x[n];
   x[0] = 0;
   for(int i=1;i<n;i++)cin>>x[i];
   int odd[n],even[n];
   loop(n){
   odd[i] = 0;
   even [i] =0;
   }
   loop(n){
       if(i==0)continue;
   if(i%2==0){
    even[i] = x[i] + even[i-1];
    odd [i] = odd[i-1];
   }
   else {
    odd [i]  = x[i] + odd[i-1];
    even [i] = even[i-1];
   }
   }

   loop(n){
   int sodd=0;int seven=0;
   if(i==0)continue;
    sodd = odd[i-1]  + even[n-1] - even[i];
    seven= even[i-1] + odd[n-1]  -  odd[i];
    if(sodd==seven)cnt++;
  }
  cout<<cnt;

   }

