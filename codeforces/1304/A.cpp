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
ll x,y,a,b;
ll BS()
{
    ll l = 0 , r = 1e9 , mid;
    while(l < r)
    {
        mid = (l+r) / 2;
        if(x + (a*mid) < y - (b*mid)) l = mid + 1;
        else if(x + (a*mid) == y - (b*mid)) return mid;
        else   r = mid;
    }
    return -1;
}
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
        int t;
        cin >> t;
        while(t--)
        {
            cin >> x >> y >> a >> b;
            ll ans = BS();
            cout<<ans<<endl;
        }
}
