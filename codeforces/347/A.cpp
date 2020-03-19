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
vector<ll>vt;
/// <<------------------------------------------------------------------------------>>
void solve(int idx , ll v)
{
   vt.push_back(v);
   if(idx == 10) return;
   solve(idx + 1 , v * 10 + 4);
   solve(idx + 1 , v * 10 + 7);
}
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int n;
    cin >> n;
    int arr[n];
    loop(n)cin >> arr[i];
    sort(arr,arr+n);
    swap(arr[0],arr[n-1]);
    loop(n)cout<<arr[i]<<" ";
}
