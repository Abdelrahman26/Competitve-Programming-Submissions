#include <bits/stdc++.h>
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
#include <stdio.h>
//#define int long long
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
ll S(ll x){ll s = 0;while(x){s += x % 10;x /= 10;}return s;} /// sum of digits.
ll powe(ll a , ll n){if(n == 1)return a;return a * powe(a ,n-1);}
ll com(int n,int m){ll z = 1;for(int i = 0; i < m;i++){z = z * ( n - i) / (i + 1) ;}return z;}
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int dr[] = {0,0,0,1,1,1,-1,-1,-1};
int dc[] ={-1,0,1,-1,0,1,-1,0,1};
/// <<------------------------------------------------------------------------------>>
const int N = 109;
int n ,m ,k;
ll arr[N];
ll dp[N][N][N];
ll cost[N][N];
ll solve(int i,  int lc , int cnt )
{
    if(i == n + 1)
    {
        if(cnt == k)
            return 0;
        return 1e13;
    }
    ll &rst = dp[i][lc][cnt];
    if(~rst)
        return rst;
    rst = 1e13;
    if(arr[i] != 0)
    {
        rst = solve(i+1, arr[i] , (arr[i] == lc) ? cnt : cnt + 1);
    }
    else
    {
        for(int j = 1 ;j <= m ;j++)
        {
            rst = min(rst , cost[i][j] + solve(i+1, j , (j == lc) ? cnt : cnt + 1));
        }
    }
    return rst;
}
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    clr(dp,-1);
    cin >> n >> m >> k;
    loop(n)
    cin >> arr[i+1];
    for(int i = 1 ;i <= n ;i++)
    {
        for(int j = 1 ; j <= m ;j++)
            cin >> cost[i][j];
    }
    ll ans = solve(1,-1,0);
    if(ans > 1e12)
        cout<<-1;
    else cout<<ans;
}
