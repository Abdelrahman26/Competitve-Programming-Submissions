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
map<int,int>dp;
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int n; cin >> n;
    vi v , arr(n);
    loop(n) cin >> arr[i];
    int ans = 0 , lst;
    loop(n)
    {
        int &x = arr[i];
         dp[x] = dp[x - 1] + 1;
         if(dp[x] > ans)
         {
             ans = dp[x];
             lst = x;
         }
    }
    for(int i = n - 1 ;i >= 0 ;i--)
    {
        if(lst == arr[i])
        {
            v.push_back(i+1);
            --lst;
        }
    }
    reverse(v.begin() , v.end());
    cout<<ans<<endl;
    loop(v.size())cout<<v[i] << " ";
}
