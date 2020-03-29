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
    int n,m;
    cin >> n >> m;
    int cnt[31] = {0};
    loop(n)
    {
        int x; cin >> x;
        cnt[__builtin_ctz(x)]++;/// cnt traling zeros.
    }
    loop(m)
    {
        int q; cin >> q;
        int ans = 0;
        for(int i = 30 ; i >= 0 && q > 0; i--)
        {
            int need = min(cnt[i] , q >> i);
            ans += need;
            q -= need * (1 << i);
        }
        if(q)cout<<-1<<endl;
        else cout<<ans<<endl;
    }
}
