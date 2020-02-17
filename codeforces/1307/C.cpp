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
 ll arr[100100][26];
 ll one[26];
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    string x;
    cin >> x;
    int n = x.size();
    ll ans = 0;
    loop(n)one[x[i] - 'a']++;
    for(int i = n - 1 ;i > -1  ;i--)
    {
       if(i!=n-1) for(int j = 0 ; j < 26 ;j++) arr[i][j] = arr[i+1][j];
        arr[i][x[i]-'a']++;
    }
    map<string , ll >mp;
    int gh;
    for(int i = 0 ; i < n;i++)
    {
        arr[i][x[i]-'a']--;
        for(int j = 0 ; j < 26 ;j++)
        {
            mp[{x[i],j + 'a'}] += arr[i][j];
        }
    }
    for(auto x : mp)
    {
        ans = max(ans,x.S);
    }
    loop(26)ans = max(ans,one[i]);
    cout<<ans<<endl;
}
