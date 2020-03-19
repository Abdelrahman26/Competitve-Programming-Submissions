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

/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int n ,k;
    cin >> n >> k;
    ll arr[n];
    loop(n) cin >> arr[i];
    int z[n];
    loop(n) z[i] = arr[i];
    sort(z , z + n);
    reverse(z , z+ n);
    set<int>st; /// first order
    vector<ll> v , idx;
    ll ans = 0;
    map<int,int>mp;
    loop(k)
    {
        v.push_back(z[i]);
        ans += z[i];
        mp[z[i]]++;
    }
    loop(n)
    {
        if(mp[arr[i]] == 1)
            idx.push_back(i);
    }
    ll ans2 = 1;
    ll mod = 998244353;
    loop(k - 1)
    {
        ans2 = ( ( ans2 % mod) *( (idx[i+1] - idx[i]) % mod) ) % mod ;
    }
    cout<<ans<<" "<<ans2;
}
