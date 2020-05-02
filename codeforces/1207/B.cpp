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
#define OnlineJudgeg
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
int fix (int a,int k){ return (a%k + k)%k; } // convert N mod to P mode
int * LIS_Lengths(vector<int> a) { int* lis = new int[a.size()];int b[a.size()];int maxLength = 1, lowerBound;lis[0] = 1, b[0] = a[0];for (size_t i = 1; i < a.size(); i++) {lowerBound = lower_bound(b, b + maxLength, a[i]) - b;lis[i] = lowerBound + 1;if (lowerBound == maxLength)    b[maxLength++] = a[i];else    b[lowerBound] = a[i];}return lis;}
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int dr[] = {0,0,0,1,1,1,-1,-1,-1};
int dc[] ={-1,0,1,-1,0,1,-1,0,1};
/// <<------------------------------------------------------------------------------>>
int A[55][55] ,B[55][55];
void setA(int i, int j)
{
    B[i][j] = 1;
    B[i+1][j]=1;
    B[i][j+1]=1;
    B[i+1][j+1]=1;
}
vector<pair<int , int> >v;
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int n,m;
    cin >> n >> m;
    for(int i = 1 ;i <= n ;i++)
    {
        for(int j = 1 ;j <= m ;j++)
        {
            int a;cin >> a;
            A[i][j] = a;
        }
    }
    for(int i = 1 ;i < n ;i++)
    {
        for(int j = 1 ;j < m ;j++)
        {
            if( (A[i][j] == 1) && (A[i][j+1] == 1)&& A[i+1][j] == 1 && A[i+1][j+1])
            {
                setA(i,j);
                v.push_back({i,j});
            }
        }
    }
    for(int i = 1 ;i <= n;i++)
    {
        for(int j = 1 ;j <= m ;j++)
            if(A[i][j] != B[i][j])
            return cout<<-1,0;
    }
    cout<<v.size()<<endl;
    loop(v.size())cout<<v[i].F << " " << v[i].S<<endl;
 }
