#include <bits/stdc++.h>
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
#define int long long
using namespace std;
//#define loop(n) for(int i=0;i<n;i++)
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
ll S(ll x){ll s = 0;while(x){s += x % 10;x /= 10;}return s;} /// sum of digits.
ll powe(ll a , ll n){if(n == 1)return a;return a * powe(a ,n-1);}
ll com(int n,int m){ll z = 1;for(int i = 0; i < m;i++){z = z * ( n - i) / (i + 1) ;}return z;}
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int dr[] = {0,0,0,1,1,1,-1,-1,-1};
int dc[] ={-1,0,1,-1,0,1,-1,0,1};
/// <<------------------------------------------------------------------------------>>


/// <<------------------------------------------------------------------------------>>
signed main()
{
    init();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int  arr[n+1] = {0}, total = 0;
        for(int i = 0 ;i < n;i++)
        {
            cin >>arr[i+1];
            total += arr[i+1];
        }
        int suf[n+2] = {0}, pre[n+1] = {0};
        map<int,int>p ,s;
        for(int i = 1 ; i <= n ;i++)
        {
            pre[i] += pre[i-1];
            if(p[arr[i]]==0)
                pre[i]++;
            p[arr[i]] = 1;
        }
        for(int i = n; i >= 1 ;i--)
        {
            suf[i] += suf[i+1];
            if(s[arr[i]]== 0)
                suf[i]++;
            s[arr[i]] = 1;
        }
        vector<pair<int,int> >ans;
        int sum = 0;
        for(int l1 = 1 ;l1 < n ;l1++)
        {
            sum += arr[l1];
            if(pre[l1] == l1 && l1 * (l1 + 1) / 2 == sum &&
               suf[l1 + 1] == (n - l1) && (n - l1)*(n - l1+1) / 2 == total - sum)
                    ans.push_back({l1,n-l1});
        }
        cout<< (ans.size()) <<endl;
        for(int i = 0 ;i < ans.size() ;i++)
          cout<<ans[i].F<<" "<<ans[i].S<<endl;
    }
}
