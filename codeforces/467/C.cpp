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
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
/// <<------------------------------------------------------------------------------>>
ll n ,m ,k;
ll arr[5005] , rem[5005];
ll dp[5005][5005];
ll solve(int i  , int counter)
{
    if(counter == k) return 0;
    if(n - i < m) return int(-1e9);/// destroy this path.
    if(~dp[i][counter])
        return dp[i][counter];
    dp[i][counter] = max(solve(i+m , counter+1) + rem[i+m-1] - rem[i]+ arr[i]
                         , solve(i+1,counter));
    return dp[i][counter];
}
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    cin >> n >> m >> k;
    loop(n)cin >> arr[i];
    clr(dp,-1);
    partial_sum(arr,arr+n,rem);
    cout<<solve(0,0)<<endl;
}
