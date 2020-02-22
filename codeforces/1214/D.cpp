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
vector<string>arr;
vector<string>visited;
int n,m,ok,ans;
bool valid(int x , int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}
int dfs(int x , int y)
{
    if(x == n - 1 && y == m - 1) return 1;
    arr[x][y] = '#';
    if(valid(x , y + 1) && arr[x][y+1] == '.'  && dfs(x , y+1))
       return 1;
    else if(valid(x + 1 , y) && arr[x+1][y] == '.' && dfs(x + 1, y))
       return 1;
    return 0;
}
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    cin >> n >> m;
    for(int i = 0 ;i < n;i++)
    {
        string s; cin >> s;
        arr.push_back(s);
    }
    if(!dfs(0,0))cout<<0;
    else if(dfs(0,0))cout<<2;
    else cout<<1;
}
