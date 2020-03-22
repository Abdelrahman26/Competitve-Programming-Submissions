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
const int maxnodes = 200009;
vector<vi>g(maxnodes);
bool visited[maxnodes];
int ans = 0;
vi keeping;
void dfs(int node)
{
    visited[node] = 1;
    keeping.push_back(node);
    for(int neighbor : g[node])
    {
        if(!visited[neighbor])
          dfs(neighbor);
    }
}
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int n, m;
    cin >> n >> m;
    loop(m)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    loop(n)
    {
        if(!visited[i+1])
        {
            keeping.clear();
            dfs(i+1);
           if(keeping.size() < 3)continue;
           bool ok = 1;
           for(auto it : keeping)
           {
               if(g[it].size() != 2)ok = 0;
           }
           if(ok)ans++;
        }
    }
     cout<<ans;
}
