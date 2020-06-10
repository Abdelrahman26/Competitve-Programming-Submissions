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
#define OnlineJudge5
#define F first
#define S second
#define  precision(n)  cout << fixed << setprecision(n)
#define clr(v,d ) memset(v, d, sizeof(v))
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<int,pii> pnii; /// weighted grid
typedef vector<pii>vii;
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
int fix (int a,int k){ return (a%k + k)%k; } // convert N mod to P mode
int * LIS_Lengths(vector<int> a) { int* lis = new int[a.size()];int b[a.size()];int maxLength = 1, lowerBound;lis[0] = 1, b[0] = a[0];for (size_t i = 1; i < a.size(); i++) {lowerBound = lower_bound(b, b + maxLength, a[i]) - b;
lis[i] = lowerBound + 1;if (lowerBound == maxLength)    b[maxLength++] = a[i];else    b[lowerBound] = a[i];}return lis;}
bool is_prime(ll n){if(n==2) return true;if(n<2 || n%2 == 0)return false;for(int i=3; i * i <= n; i+=2){if(n % i == 0)return false;}return true;}
ll LCM(ll a, ll b){return (a * b)/__gcd(a,b);}
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int dr[] = {0,0,0,1,1,1,-1,-1,-1};
int dc[] ={-1,0,1,-1,0,1,-1,0,1};
/// <<------------------------------------------------------------------------------>>
map<char,int>parity;
void check(string &a , string &b)
{
    int n = a.size();
    int m = b.size();
    loop(min(n,m))
    {
        if(parity[a[i]] < parity[b[i]]) return ;
        else if(parity[a[i]] > parity[b[i]])
        {
            swap(parity[a[i]] , parity[b[i]]);
            return ;
        }
    }
}
bool state(string &a , string &b)
{
    int n = a.size();
    int m = b.size();
    loop(min(n,m))
    {
        if(parity[a[i]] > parity[b[i]])
            return 0;
        else if(parity[a[i]] < parity[b[i]])
            return 1;
    }
    return n <= m;
}
/// <<----;------------------------------------------------------------------------->>
int main()
{
    init();
    int n;
    cin >> n;
    vector<string>v(n);
    loop(n)
    {
        cin >> v[i];
    }
    loop(26)
    parity[i + 'a'] = i;
    for(int j = 0 ; j < 1000 ;j++)
    {
        loop(n - 1)
        {
            check(v[i] , v[i+1]);
        }
    }
    loop(n-1)
    {
        bool gh = state(v[i] , v[i+1]);
        if(!gh)
        {
            cout << "Impossible" << endl;
                return 0;
        }
    }
    char ans[26];
    for(auto x: parity)
    {
        ans[x.S] = x.F;
    }
    loop(26) cout<<ans[i];
}
