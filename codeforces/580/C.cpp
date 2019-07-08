 #include <bits/stdc++.h>
    using namespace std;
    #define loop(n)  for(int i=0;i<n;i++)
    #define endl '\n'
    #define MAXNODES 1000000+9
    typedef long long ll;
    typedef vector<int> vi;
    typedef vector<pair<int,int> >vp;
    using namespace std;
    struct point {
	double x, y;
    };
int ans;
vector<vi> edges(MAXNODES),emptyEdges(MAXNODES);
bool visited[MAXNODES];
bool state  [MAXNODES];
void dfs(int node,int rem,int m)
{
   visited[node] = 1;
   if(edges[node].size()==1&&node!=1&&rem<=m)
   {
       ans++;
       return;
   }
   for(int neighbor : edges[node])
        if(!visited[neighbor])
        {
            if(state[neighbor]+rem <= m)
            dfs(neighbor,(state[neighbor]==1)?rem+1:0,m);
        }
}

    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
        int n,m;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            cin>>state[i];
        }
        loop(n-1)
        {
            int a,b;
            cin>>a>>b;
            edges[a].push_back(b);
            edges[b].push_back(a);
        }
        dfs(1,state[1],m);
        cout<<ans;

    }


