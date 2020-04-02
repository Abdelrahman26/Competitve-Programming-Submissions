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
ll S(ll x)
{
    if(x < 0)return -1;
    ll s = 0;
    while(x)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}
ll powe(ll a , ll n)
{
    if(n == 1)
        return a;
    return a * powe(a ,n-1);
}
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int a,b,c;
    cin >> a >> b >> c;
    int ans = 0;
    vi arr;
    for(int i = 1 ;i <= 81 ;i++)
    {
        ll x = b * powe(i,a) + c;
        if(S(x) ==  i && x < int(1e9))
            arr.push_back(x),ans++;
    }
    cout<<ans<<endl;
    loop(ans)
      cout<<arr[i]<<" ";

}
