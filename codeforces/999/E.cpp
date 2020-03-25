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
int vis[5005] ,good[5005] ,bad[5005], cap;
vector<vi>g(5005);
void dfs(int node)
{
    vis[node] = 1;
    good[node]= 1;
    for(int neighbor : g[node])
    {
        if(vis[neighbor] == 0)
        {
            dfs(neighbor);
        }
    }
}
int dfs2(int node , int cnt)
{
    vis[node] = 1;
    if(!good[node])cnt += 1;
    for(int neighbor : g[node])
    {
        if(!vis[neighbor])
            dfs(neighbor);
    }
    return cnt;
}
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int n , m;
    cin >> n >> m >> cap;
    loop(m)
    {
        int x , y;
        cin >> x >> y;
        g[x].push_back(y);
    }
    dfs(cap);
    clr(vis,0);
    int ans = 0;
    vector<pair<int,int> >gh;
    for(int i = 1 ;i <= n ;i++)
    {
        clr(vis,0);
        if(!good[i])
        {
            bad[i] = dfs2(i,0);
            gh.push_back({bad[i] , i});
        }
    }
    reverse(gh.begin() , gh.end());
    for(auto x : gh)
    {
        if(!good[x.S])
        {
            dfs(x.S);
            ans++;
        }
    }
    cout<<ans<<endl;
}
