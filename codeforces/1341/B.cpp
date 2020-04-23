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
    int t;
    cin >> t;
    while(t--)
    {
        int n , k , ans = 0;
        cin >> n >> k;
        int arr[n + 9];
        arr[0] = 0;
        loop(n)
         cin >> arr[i+1];
        int len = 0 , l = 1;
        int peak[n + 9] = {0};
        for(int i = 2 ;i < n ;i++)
        {
            if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                peak[i] = 1;
            }
        }
        partial_sum(peak , peak + n + 9 , peak);
        for(int i = 1 ;i <= (n - k + 1) ; i++)
        {
           int a  = peak[k + i - 2];
           int b  = peak[i];
           int sz = peak[k + i - 2] - peak[i];
           if(sz > ans)
           {
               ans = sz;
               l   = i;
           }
        }
        cout<<ans + 1<<" "<<l<<endl;
    }
}
