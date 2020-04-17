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
int * LIS_Lengths(vector<int> a) { int* lis = new int[a.size()];int b[a.size()];int maxLength = 1, lowerBound;lis[0] = 1, b[0] = a[0];for (size_t i = 1; i < a.size(); i++) {lowerBound = lower_bound(b, b + maxLength, a[i]) - b;lis[i] = lowerBound + 1;if (lowerBound == maxLength)    b[maxLength++] = a[i];else    b[lowerBound] = a[i];}return lis;}
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int dr[] = {0,0,0,1,1,1,-1,-1,-1};
int dc[] ={-1,0,1,-1,0,1,-1,0,1};
/// <<------------------------------------------------------------------------------>>
const int N = 1e2+9;
int n;
int arr[N];
int dp[N][4];
int solve(int i , int lst)
{
    if(i == n)
        return 0;
    int &rst = dp[i][lst];
    if(~rst)return rst;
    int ch1 =1e9 , ch2 =1e9;
    if(arr[i]==0)
        ch1 = 1 + solve(i+1,0);
    else if(arr[i] == 1)
    {
        ch1 = 1 + solve(i+1,0);
        if(lst != 1)
           ch2 = solve(i+1,1);
    }
    else if(arr[i] == 2)
    {
       ch1 = 1 + solve(i+1,0);
       if(lst != 2)
            ch2 = solve(i+1,2);
    }
    else
    {
        if(lst == 1)
            ch1 = solve(i+1,2);
        else if(lst == 2)
            ch1 = solve(i+1,1);
        else
        {
            ch1 = solve(i+1 , 1);
            ch1 = min(ch1 , solve(i+1,2));
        }
        ch2 = 1 + solve(i+1,0);
    }
    return rst = min(ch1,ch2);
}
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    cin >> n;
    loop(n)
     cin >> arr[i];
    clr(dp,-1);
    cout<<solve(0,0);
}

