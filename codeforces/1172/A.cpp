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
//#define int long long
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
ll S(ll x){ll s = 0;while(x){s += x % 10;x /= 10;}return s;} /// sum of digits.
ll powe(ll a , ll n){if(n == 1)return a;return a * powe(a ,n-1);}
ll com(int n,int m){ll z = 1;for(int i = 0; i < m;i++){z = z * ( n - i) / (i + 1) ;}return z;}
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int dr[] = {0,0,0,1,1,1,-1,-1,-1};
int dc[] ={-1,0,1,-1,0,1,-1,0,1};
/// <<------------------------------------------------------------------------------>>

/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int n ;
    int cnt = 0;
    cin >> n;
    set<int>st ,ans , st2;
    int  arr[n];
    bool fl = 0;
    loop(n)
    {
        int x; cin >> x;
        if(x) fl = 1;
        st.insert(x);
        st2.insert(x);
    }
    deque<int>de;
    loop(n)
    {
        cin >> arr[i];
        de.push_back(arr[i]);
    }
    vi v;
    bool ok = 0;
    for(int i = 0 ; ;i++)
    {
        if(de.empty()) break;
        int src = de.back();
        if(de.front() == 1 || ok)
        {
          ok = 1;
          v.push_back(de.front());
          de.pop_front();
          continue;
        }
        else if(st2.find(src+1) != st2.end())
        {
            int f = src+1;
            st2.erase(src+1);
            de.push_back(src+1);
            int gh = de.front();
            st2.insert(gh);
            de.pop_front();
            cnt++;
        }
        else cnt++;
        if(cnt > n) break;
    }
    bool sorted = 1;
    for(int i = 1 ;i < v.size() ;i++)
    {
        if(v[i] != v[i-1] + 1)
            sorted = 0;
    }
    int rem = 1e9;
    if(sorted && v.size() == n)
        rem = cnt;
    int srch = 1;
    cnt = 0;
    for(int i = 0 ;i < n ;i++)
    {
       if(st.find(srch) != st.end())
       {
           srch++;
       }
       st.insert(arr[i]);
       cnt++;
    }
    cnt += n - srch + 1;
    cout<<min(cnt,rem );
}
