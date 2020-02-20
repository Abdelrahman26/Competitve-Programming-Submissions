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
int n,m;
vector<pair<int, int> >arr(300300);
int solve(int x ,int y)
{
    for(int i =  1; i < m ; i++)
    {
        if(arr[i].F == x || arr[i].S == x || arr[i].F == y || arr[i].S == y )continue;
        if(y == -1) return solve(x,arr[i].F) || solve(x,arr[i].S);
        return 0;
    }
    return 1;
}
int main()
{
   init();
   cin >> n >> m;
   loop(m)
   {
       cin >> arr[i].F >> arr[i].S;
   }
   if(solve(arr[0].F , -1) || solve(arr[0].S , -1))return cout<<"YES",0;
   cout<<"NO";
}
