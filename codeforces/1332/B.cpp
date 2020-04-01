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
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<pair<int,int> >ipt;
        loop(n)
        {
            int x; cin >> x;
            ipt.push_back({x,0});
        }
        int k = 1;
        bool ok = 0;
        for(int i = 2 ;i <= 32 ;i++)
        {
            for(int j = 0 ;j < n ;j++)
            {
                int gh = ipt[j].F;
                if(ipt[j].F%i == 0 && ipt[j].S == 0)
                {
                    ipt[j].F = k;
                    ipt[j].S = 1;
                    ok = 1;
                }
            }
            if(ok)
            {
                ++k;
                ok = 0;
            }
        }
            int ans = 0;
            loop(n)
            {
                ans = max(ans,ipt[i].F);
            }
            cout<<ans<<endl;
            loop(n)cout<<ipt[i].F<<" ";
            cout<<endl;
    }
}
