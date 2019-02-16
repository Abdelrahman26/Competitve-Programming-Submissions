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
      int n,v,price=0;
      cin>>n>>v;
      if(n<=v){
        cout<<n-1;
        return 0;
      }
      loop(v){
          price++;
          n--;
          }
      for(int i=2;n!=1;i++){
        price +=i;
        n--;
    }
    cout<<price;

         }
