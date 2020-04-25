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
int n , s , k;
int arr[55];
int dp[55][2005];
string str;
int solve(int idx , int rem)
{
    if(rem <= 0)
        return 0;
    int &rst = dp[idx][rem];
    if(~rst)
    return rst;
    rst = 1e9;
    for(int i = 0 ;i < n ;i++)
    {
        if(arr[i] > arr[idx] && str[i] != str[idx])
        {
            rst = min(rst, solve(i , rem - arr[i]) + abs(idx - i));
        }
    }
    return rst;
}
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    cin >> n >> s >> k;
    --s;
    loop(n)
    cin >> arr[i];
    cin >> str;
    int ans = 1e9;
    clr(dp,-1);
    for(int i = 0 ;i < n; i++)
    {
        ans = min(ans,solve(i,k - arr[i]) + abs(i - s));
    }
    if(ans > 100000)
        return cout<<-1,0;
    cout<<ans;
}
