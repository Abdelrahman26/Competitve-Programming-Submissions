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
    /*
vector<vp> edges(MAXNODES),emptyEdges(MAXNODES);
bool visited[MAXNODES];
void dfs(int node)
{
   visited[node] = 1;
   for(int neighbor : edges[node])
        if(!visited[neighbor])
          dfs(neighbor);
}
*/
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
        int n;
        cin>>n;
        int x[n+1];
        for(int i=1;i<=n;i++)cin>>x[i];
        for(int i=1;i<=n;i++)
        {
            x[i] += x[i-1];
        }
        int q;
        cin>>q;
        loop(q)
        {
            int xx,y;
            cin>>xx>>y;
            cout<<(x[y]-x[xx-1])/10<<endl;
        }


    }
