//#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <vector>
#include <string>
#include <climits>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
using namespace std;
#define loop(n) for(int i=0;i<n;i++)
#define endl '\n'
#define OnlineJudgec
#define F first
#define S second
#define  precision(n)  cout << fixed << setprecision(n)
#define clr(v,d ) memset(v, d, sizeof(v))
typedef long long ll;
typedef vector<int> vi;
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
#ifdef OnlineJudge
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
}
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
/// <<------------------------------------------------------------------------------>>
const int mx_N = 200009;
int lvl;
vector<vi>g(mx_N);
vector<int>tin(mx_N),tout(mx_N),prt(mx_N),dep(mx_N);
int vis [mx_N];
void dfs(int node , int parent , int depth)
{
    prt[node] = parent;
    dep[node] = depth;
    tin[node] = lvl++;
    vis[node] = 1;
    for(int nieghbor : g[node])
    {
        if(!vis[nieghbor])
            dfs(nieghbor, node , depth + 1);
    }
    tout[node] = lvl++;
}
bool ISANC(int u , int v)/// u Ancestor of v
{
    return (tin[u] <= tin[v] && tout[u] >= tout[v]);
}
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int n, m;
    clr(vis,0);
    cin >> n >> m;
    loop(n-1)
    {
        int x,y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1,0,0);
    vi v;

    while(m--)
    {
        int k; cin >> k;
        v.resize(k);
        loop(v.size())
         cin >> v[i];
    int theDeepest = v[0];
    for(auto &it : v)
        if(dep[it] > dep[theDeepest]) theDeepest = it;
    int &z = theDeepest;
    loop(v.size())
        if(v[i] != z && prt[v[i]] != 0)
            v[i] = prt[v[i]];
    bool ok = 1;
    loop(v.size())
      ok &= ISANC( v[i] , z);
    if(ok)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }

}
