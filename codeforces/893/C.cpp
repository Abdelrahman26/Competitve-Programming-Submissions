 #include <bits/stdc++.h>
    using namespace std;
    #define loop(n)  for(int i=0;i<n;i++)
    #define endl '\n'
    #define MAXNODES 100000+9
    #define PB push_back
    #define MP make_pair
    typedef long long ll;
    typedef vector<int> vi;
    typedef vector<pair<int,int> >vp;
    using namespace std;
    struct point {
	double x, y;
    };

/*
string itos(t i){
 stringstream s;
 s << i;
 return s.str();
}
stoi()
strcpy(char_array, s.c_str());
 */
 vector<vi>g(MAXNODES);
 int  cost[MAXNODES];
 int visited[MAXNODES];
 ll cnt = 1e18;
 ll dfs(int node)
 {
     visited[node] = 1;
     cnt = min(cnt,(ll)cost[node]);
     for(int neighbor : g[node])
     {
         if(!visited[neighbor])
            dfs(neighbor);
     }
     return cnt;
 }
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
        ll n,m,ans = 0;
        cin>>n>>m;
        for(int i = 1; i<=n;i++)
        {
            cin>>cost[i];
        }
        for(int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);// undirected graph.
        }
        ll k=0;
        for(int i=1;i<=n;i++)
        {
            if(!visited[i]){
                 dfs(i);
                 ans += cnt;
                 cnt = 1e18;
            }
        }
        cout<<ans;
    }

