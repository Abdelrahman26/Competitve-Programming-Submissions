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
int n , k;
int arr[200005];
ll check(int x)
{
   for(int i = 0 ; i< n ;i++)
     {
         if(arr[i] > x)
            return i;
     }
     return n;
}
ll BS()
{
     ll l = 1 , r = 1e9 , mid;
     while(l <= r )
     {
         mid = (l + r) / 2; /// x
         ll gh = check(mid);
         if(gh == k)return mid;
         if(gh < k)l = mid + 1;
         else r = mid - 1;
     }
     return -1;
}
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    cin >>n >> k;
    loop(n) cin >> arr[i];
    sort(arr,arr+n);
    int N = BS();
    cout<<N;
}
