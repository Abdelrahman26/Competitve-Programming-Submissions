#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
#define LCM(a,b) (a*b)/__gcd(a,b)
typedef long long ll;
using namespace std;
using namespace std;
int main()
{
 cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);
      int n;
      cin>>n;
      int x[n];
      set<int>s;
      loop(n){
      int y;
      cin>>y;
      s.insert(y);
      }
       vector<int>v(s.size());
       copy(s.begin(), s.end(),v.begin());
      if(s.size()==1){
        cout<<v[0]-v[0];
      }
      else if(s.size()==2){
        if ((abs(v[1]-v[0]))%2==0)cout<< (abs(v[1]-v[0]))/2;
        else cout<<(abs(v[1]-v[0]));
      }
      else if(s.size()==3){
            sort(v.begin(),v.end());
        if((v[1]-v[0]) == v[2]-v[1])cout<<v[2]-v[1];
        else cout<<-1;
      }

      else cout<<-1;

}
