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
int n ,m;
bool valid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int n;cin >> n;
    int ans = n / 3;
    int arr[8] = {0};
    loop(n)
    {
        int s; cin >>s;
        arr[s]++;
        if(s == 5 || s== 7)return cout << -1,0;
    }
    vector<int>v[n/3];
    int gh = 0;
    int mn = min(arr[1] , min(arr[2] , arr[4]));
    arr[1] -= mn, arr[2]-=mn , arr[4] -= mn;
    loop(mn)
    {
        v[gh] = {1 , 2 , 4};
        gh++;
    }
    mn = min(arr[1] , min(arr[2] , arr[6]));
    arr[1] -= mn, arr[2]-=mn , arr[6] -= mn;
    loop(mn)
    {
        v[gh] = {1 , 2 , 6};
        gh++;
    }
    mn = min(arr[1] , min(arr[3] , arr[6]));
    arr[1] -= mn, arr[3]-=mn , arr[6] -= mn;
    loop(mn)
    {
        v[gh] = {1 , 3 , 6};
        gh++;
    }
    if(gh != n / 3)cout<<-1;
    else{
        for(int i = 0 ; i< n / 3 ;i++)
        {
            for(int j =0 ;j < 3 ;j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
