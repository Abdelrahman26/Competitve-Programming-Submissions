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
        ll l ,r , d , u;
        cin >> l >> r >> d >> u;
        ll px , py , x0 , y0 , x1 ,y1;
        cin >> px >> py >> x0 >> y0 >> x1 >> y1;
        if(max(l,r) > 0 && abs(x0 - x1) == 0)
        {
            cout<<"NO"<<endl;
                continue;
        }
        if(max(d,u) > 0 && abs(y0 - y1) == 0)
        {
            cout<<"NO"<<endl;
                continue;
        }
        if(l > r)
        {
            l -= (abs(px - x0));
            if(l > r)
            {
                cout<<"NO"<<endl;
                continue;
            }
        }
        else
        {
            r -= (abs(px - x1));
            if(r > l)
            {
                cout<<"NO"<<endl;
                continue;
            }
        }
        if(d > u)
        {
            d -= abs(py - y0);
            if(d > u)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
        }
        else
        {
            u -= abs(py - y1);
            if(u > d)
            {
                cout<<"NO"<<endl;
                continue;
            }
        }
         cout<<"YES"<<endl;
    }

}
