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

/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int n,k;
    cin >> n >> k;
    map<string,int>mp;
    string s[n];
    loop(n)
     {
         cin >> s[i];
         mp[s[i]]++;
     }
     int ans = 0;
     for(int i=0;i<n;i++)
     {
         for(int j = i+1 ;j < n ;j++)
         {
             if(i == j )continue;
             string rem = "";
             for(int w = 0 ; w < k ;w++)
             {
                 if(s[i][w] != s[j][w])
                 {
                     rem += 236 - (s[i][w] + s[j][w]);
                 }
                 else rem += s[i][w];
             }
             ans += mp[rem];
         }
     }
     cout<<ans/3;

}
