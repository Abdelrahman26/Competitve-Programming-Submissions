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
 set<int> l , r;
 ll ans;
 int cnt;
 void dfs(int node,int p)
 {
     visited[node] = 1;
     for(int neighbor : g[node])
     {
         if(!visited[neighbor])
         {
          if(p==1)l.insert(neighbor),dfs(neighbor,2);
          else r.insert(neighbor),dfs(neighbor,1);
         }
     }
 }
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
        int n;
        cin>>n;
        loop(n-1)
        {
            int x,y;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        l.insert(1);
        dfs(1,2);
        auto pos = l.find(1);
        for(auto it = pos;it!=l.end();it++)
        {
            int st = *it;
            int len = g[st].size();
            ans     += r.size() - len;
        }
        cout<<ans;

    }
