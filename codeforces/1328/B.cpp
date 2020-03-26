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
    ll mx = 100000ll * 100000;
    vector<ll>v;
    v.push_back(1);
    for(int i = 1 , j = 2; v[i-1] <= mx ;i++,j++)
    {
        ll x = v[i-1] + j;
        v.push_back(x);
    }
    int t;
    cin >> t;

    while(t--)
    {
        int n , k;
        cin >> n >> k;
        auto idx = lower_bound(v.begin() , v.end() , k) - v.begin();///2
        ll value= v[idx];
        string z(n-2 , 'a');
        string r(2, 'b');
        z = z + r;
        swap(z[n - 2], z[n - 2 - idx]);
        ll idx2 = n - 2 - idx;// first b
        value -= k;
        idx2   = value + idx2 + 1;
        swap(z[n-1] , z[idx2]);
        cout<<z<<endl;
    }

}
