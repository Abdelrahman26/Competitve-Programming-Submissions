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
    freopen("commandos.in","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
}
ll S(ll x){ll s = 0;while(x){s += x % 10;x /= 10;}return s;} /// sum of digits.
ll powe(ll a , ll n){if(n == 1)return a;return a * powe(a ,n-1);}
ll com(int n,int m){ll z = 1;for(int i = 0; i < m;i++){z = z * ( n - i) / (i + 1) ;}return z;}
int * LIS_Lengths(vector<int> a) { int* lis = new int[a.size()];int b[a.size()];int maxLength = 1, lowerBound;lis[0] = 1, b[0] = a[0];for (size_t i = 1; i < a.size(); i++) {lowerBound = lower_bound(b, b + maxLength, a[i]) - b;lis[i] = lowerBound + 1;if (lowerBound == maxLength)    b[maxLength++] = a[i];else    b[lowerBound] = a[i];}return lis;}
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int dr[] = {0,0,0,1,1,1,-1,-1,-1};
int dc[] ={-1,0,1,-1,0,1,-1,0,1};
/// <<------------------------------------------------------------------------------>>
const int N = 1e5+9;
ll n,p,q,r;
ll arr[N];
ll dp[N][2][2][2];
bool st[N][2][2][2];
ll solve(ll i , ll a, ll b , ll c)
{
    if(c)
        return 0;
    if(i == n)
        return -3e18;
    ll &rst = dp[i][a][b][c];
    if(st[i][a][b][c])
        return rst;
    st[i][a][b][c] = 1;
    rst = -3e18;
    if(a == 0)
      rst = p * arr[i] + solve(i,1,0,0);
    else if(b == 0)
      rst = q * arr[i] + solve(i,1,1,0);
    else if(c == 0)
      rst = r * arr[i] + solve(i,1,1,1);
    rst   =  max(rst , solve(i+1,a,b,c));

    return rst;
}
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    cin >> n >> p >> q >> r;
    loop(n)
     cin >> arr[i];
    cout<<solve(0,0,0,0);
}
