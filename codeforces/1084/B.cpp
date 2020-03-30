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
    ll n,s;
    cin >> n >> s;
    ll x[n];
    ll h = s;
    loop(n) cin >> x[i];
    sort(x,x+n);
    ll sum = 0;
    loop(n)
    {
        sum += x[i];
    }
    if(sum < s)return cout<<-1 , 0;
    int gh = x[0];
    loop(n)
    {
      s -= (x[i] - gh);
      x[i] = gh;
    }
    if(s<=0)cout<<gh;
    else{
        cout<<(sum - h) / n;
    }

}
