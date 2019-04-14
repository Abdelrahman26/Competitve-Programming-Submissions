  #include <iostream>
    #include <bits/stdc++.h>
    #include <iomanip>
    #include<cmath>
    #include<vector>
    #include<queue>
    #include<stack>
    #include<deque>
    #include<set>
    #include<string>
    #include<sstream>
    #include <sstream>
    #include <algorithm>
    #include <map>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
#define LCM(a,b) (a*b)/__gcd(a,b)
typedef long long ll;
 template<typename t>
    string itos(t i){
     stringstream s;
     s << i;
     return s.str();
     }

using namespace std;
ll cnt,ans,sum;
int main()
{
      cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);
      int n,m;
      cin>>n>>m;
      int freq[n+1]={0};
      pair<int,int>x[m+1];
      loop(m){
      int z,y;
      cin>>z>>y;
      x[i].first = z;
      x[i].second= y;
      freq[z]++,freq[y]++;
      }
      while(true){
              bool flag = false;
               vector<int>f;
      loop(n+1){
          if(freq[i]==1){
                flag = true;
            f.push_back(i);
          }
      }
      int l= f.size();
       for(int j=0;j<l;j++){
         for(int k=0;k<m;k++){
            if(x[k].first==f[j])freq[x[k].second]--;
            else if (x[k].second==f[j])freq[x[k].first]--;
         }
       }
       for(int p=0;p<l;p++)freq[f[p]]=0;
       f.clear();
      if(flag==true)cnt++;
      else return cout<<cnt,0;
      }


}
