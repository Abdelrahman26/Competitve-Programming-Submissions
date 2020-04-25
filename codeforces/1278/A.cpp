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
        string s , rem;
        cin >> s >> rem;
        bool ans = 0;
        int n = s.size();
        int m = rem.size();
        int A[30] ={0} , B[30] ={0};
        loop(n)
        {
            A[s[i] - 'a']++;
        }
        for(int i = 0 ;i < m ;i++)
        {
            for(int j = i ; j < m ;j++)
            {
                for(int r= 0 ;r < 26 ;r++)B[r] = 0;
                for(int k = i ; k <= j ;k++)
                {
                   B[rem[k] - 'a']++;
                }
                bool ok = 1;
                for(int h = 0 ;h < 26 ;h++)
                {
                    if(A[h] != B[h])
                    {
                       ok = 0;
                       break;
                    }
                }
              if(ok) ans = 1;
            }
        }
        if(ans)cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
    }

}
