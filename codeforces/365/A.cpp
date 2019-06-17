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
    int n,k,cnt=0;
    cin>>n>>k;
    vector<char>y;
    set<char>s;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        loop(x.size())y.push_back(x[i]);
        for(int j=0;j<x.size();j++){
           if(y[j]-'0'<=k) s.insert(y[j]);
        }
        if(s.size()==k+1)cnt++;
        s.clear();
        y.clear();
    }
    cout<<cnt;
}
