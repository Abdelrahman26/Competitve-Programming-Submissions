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
int n ,m , ans = 1e9;
int arr[300300];
bool check(int value)
{
    int prev = 0;
    int rem  = 0;
    int k    = value;
    for(int i = 0 ; i < n ; i++)
    {
        k = value;
        if(prev > arr[i])
        {
            if(arr[i] + k < prev)return 0;
            rem  =  prev;
        }
        else if(m - arr[i] <= k)
        {
            k -= (m - arr[i]);
            if(k >= prev)
                rem = prev;
            else rem = arr[i];
        }
        else rem = arr[i];
        if(rem < prev) return 0;
        prev = rem;
    }
    return 1;
}
int BS(int l, int r)
{
    int mid;
    while(l <= r)
    {
        mid = ( l + r) / 2;
        if(check(mid))
        {
            if(mid < ans)
            {
                     ans = mid;
                     r   = mid - 1;
            }
        }
        else l = mid + 1;
    }
    return ans;
}
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    cin  >> n >> m;
    loop(n)cin >> arr[i];
    cout << BS(0,m-1);
}
