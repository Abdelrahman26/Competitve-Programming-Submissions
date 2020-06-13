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
#define OnlineJudge5
#define F first
#define S second
#define  precision(n)  cout << fixed << setprecision(n)
#define clr(v,d ) memset(v, d, sizeof(v))
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<int,pii> pnii; /// weighted grid
typedef vector<pii>vii;
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
int fix (int a,int k){ return (a%k + k)%k; } // convert N mod to P mode
int * LIS_Lengths(vector<int> a) { int* lis = new int[a.size()];int b[a.size()];int maxLength = 1, lowerBound;lis[0] = 1, b[0] = a[0];for (size_t i = 1; i < a.size(); i++) {lowerBound = lower_bound(b, b + maxLength, a[i]) - b;
lis[i] = lowerBound + 1;if (lowerBound == maxLength)    b[maxLength++] = a[i];else    b[lowerBound] = a[i];}return lis;}
bool is_prime(ll n){if(n==2) return true;if(n<2 || n%2 == 0)return false;for(int i=3; i * i <= n; i+=2){if(n % i == 0)return false;}return true;}
ll LCM(ll a, ll b){return (a * b)/__gcd(a,b);}
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int dr[] = {0,0,0,1,1,1,-1,-1,-1};
int dc[] ={-1,0,1,-1,0,1,-1,0,1};
/// <<------------------------------------------------------------------------------>>
const ll MOD = int(1e9) + 7;
/// state :- dp[i] number of ways possible if the last string ends at index i .
/*
for this you have to check for every substring ending at index i and check if it is a valid one .Let the string be j.....i .

If it is valid simply add dp[j-1] to dp[i] .i.e these much partitions can be made by having last string as s[j.....i] .
*/
int mx = 1;
int mnSplite[1010];
/// <<----;------------------------------------------------------------------------->>
int main()
{
    init();
    int n;
    cin >> n;
    string x; cin >> x;
    int cnt[30] = {0};
    int vis[30] = {0};
    loop(26) cin >> cnt[i];
    loop(n) mnSplite[i] = 1e4;
    mnSplite[0] = 1;
    int dp[n] = {0};
    dp[0] = 1;
    for(int i = 1 ;i < n;i++)
    {
        for(int k = 0 ; k < 26 ;k++)vis[k] = 0;
        char cur = x[i];
        vis[cur - 'a']= 1;
        for(int j = i ; j >= 0 ; j--)
        {
            vis[x[j] - 'a'] = 1;
            int len   = i - j + 1;
            bool poss = 1;
            for(int k = 0 ; k < 26 ;k++)
                if(vis[k])
                    if (len > cnt[k]) poss = 0;
            if(poss)
            {
                dp[i] = (dp[i] +  ( (j) ? dp[j - 1] : 1) ) % MOD ;
                mx    = max(mx, len);
                mnSplite[i] = min(mnSplite[i] , (!j ? 0 : mnSplite[j - 1]) + 1);
            }
            else break;
        }
    }
    cout<<dp[n-1]<<endl;
    cout<<mx<<endl;
    cout<<mnSplite[n-1]<<endl;
}
