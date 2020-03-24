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
    int n , k;
    cin >> n >> k;
    string x; cin >> x;
    int arr[26] = {0};
    loop(n)
    {
        arr[x[i] - 'a']++;
    }
    int cnt = 0;
    bool ok = 0;
    loop(26)
    {
        if(ok)
        {
            arr[i] = 0;
            continue;
        }
        if(cnt + arr[i] <= k)
        {
            cnt += arr[i];
        }
        else
        {
            arr[i] =  k - cnt;
           ok = 1;
        }
    }
    loop(n)
    {
        if(arr[x[i] - 'a'] > 0)
        {
            arr[x[i] - 'a']--;
        }
        else cout<<x[i];
    }
}
