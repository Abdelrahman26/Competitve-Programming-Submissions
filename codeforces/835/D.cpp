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
string s;
int dp  [5010][5010];
int pal [5010][5010]; /// -1 0 1
bool palindrom(int x , int y)
{
    if(x == y) return pal[x][y] = 1;
    if(y - x == 1)return pal[x][y] = (s[x] == s[y]);
    if(~pal[x][y]) return pal[x][y];
    bool A = palindrom(x+1 , y-1);
    return pal[x][y] = (A && (s[x] == s[y]));
}
int solve(int idx ,int jdx)
{
    if(idx > s.size() - 1 || jdx < 0 || jdx < idx) return 0;
    int &rst = dp[idx][jdx];
    if(~rst) return rst;
    rst = palindrom(idx,jdx);
    int a , b;
    rst+= solve(idx+1,jdx);
    rst+= solve(idx,jdx-1);
    rst-= solve(idx+1,jdx-1);
    return (dp[idx][jdx] = rst);
}
int cnt[5005];
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    cin >> s;
    clr(dp,-1);
    clr(pal,-1);
    cout<<solve(0,s.size() - 1);
    for(int i = 0 ; i < s.size() ;i++)
        for(int j = i ; j < s.size() ; j++)
        {
            if(pal[i][j] != 1)continue;
            int  m = 0, k = j;
            while(i <= k)
            {
                if(pal[i][k])
                {
                    cnt[m]++;
                    m++;
                }
                else break;
                if(i == k - 1)k = i;
                else if((i + k) % 2 == 1)k = (i+k)/2;
                else k = ((i + k) / 2) - 1;
            }
        }
    loop(s.size()-1) cout<<" "<<cnt[i+1];
}
