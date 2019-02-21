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
   int n,sum=0;
   cin>>n;
   int x[n];
   loop(n){
       cin>>x[i];
       sum += x[i];
   }
   sort(x,x+n);
         cnt = sum;
     int rem = sum;
   for(int i=1;i<n;i++){
    for(int j=2;j<=x[i];j++){
        if(x[i]%j!=0)continue;
        sum = rem - (x[0] + x[i])+(x[0]*j)+(x[i]/j);
        cnt = min(cnt,sum);
    }
   }
   cout<<cnt;
   }

