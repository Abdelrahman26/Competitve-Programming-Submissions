#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
bool t[1000000];
int main()
{
      cin.tie(0);
      cin.sync_with_stdio(0);
    int n,m,state;
    cin>>n>>m;
    int x[n];
    set<int>st;
    vector<int>q;
    loop(n) cin>>x[i];
    state = x[n-1];
    pair<int,int>p[m];
   for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    p[i].first = u;
    p[i].second= v;
        if(v==state) {
            q.push_back(u);
            t[u] = true;
    }
     }
     vector<int>y[n+1];
     for(int i=0;i<m;i++){
                        y[p[i].first].push_back(p[i].second);
      }
     int cut = 0;
     for(int i=n-2;i!=-1;i--){
            int cnt = 0;
        if(t[x[i]]==true){
                int h = y[x[i]].size();
            if(st.size()> h)st.insert(x[i]);
            else {
                for(int j=0;j<y[x[i]].size();j++){
                    if(st.find(y[x[i]][j])!=st.end())cnt++;
                }
                if(cnt == st.size())cut++;
                else  st.insert(x[i]);
            }
        }
        else {
            st.insert(x[i]);
        }
     }
     cout<<cut;


}



