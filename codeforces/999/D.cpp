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
    int n , m;
    cin >> n >> m;
    int z = n / m;
    map<int,int>mp;
    ll arr[n];
    loop(n)cin >> arr[i];
    loop(m)
    {
        mp[i] = z;
    }
    ll ans = 0;
    bool check[n] = {0};
    set<int>s;
    loop(m)s.insert(i);
    loop(n)
    {
        int mod = arr[i] % m;
        if(mp[mod] != 0)
        {
            --mp[mod];
            check[i] = 1;
            if(mp[mod] == 0)s.erase(mod);
        }
    }
    loop(n)
    {
        if(check[i])continue;
        int mod = arr[i] % m;
        auto gh = s.lower_bound(mod);
        if(gh == s.end())
        {
            gh = s.begin();
            ans+= (m -  mod + *gh);
         arr[i]+= (m -  mod + *gh);
        }
        else
        {
          ans += (*gh - (mod));
          arr[i] += (*gh - (mod));
        }
        --mp[*gh];
        if(mp[*gh] == 0)s.erase(gh);
    }
    cout<<ans<<endl;
    loop(n)cout<<arr[i]<<" ";
}
