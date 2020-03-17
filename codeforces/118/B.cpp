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


/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int n;
    cin >> n;
    int l = n + n + 1;
    int gh = n;
    int m = 0;
    for(int i = 0 ; i <= n; i++)
    {
        for(int j = 0 ; j < gh ;j++)cout<<"  ";
        for(int k = 0 ; k < m ; k++)cout<<k<<" ";
        for(int k = m; k > 0 ; k--)cout<<k<<" ";
        cout<<0<<endl;
        gh--;
        m++;
    }
    gh = 1;
    m  = n;
    for(int i = n + 1 ; i < l ;i++)
    {
        for(int j = 0 ; j < gh ; j++)cout<<"  ";
        for(int k = 0 ; k < m && m != 1;k++)cout<<k<<" ";
        for(int k = m-2 ; k > 0 ;k--)cout<<k<<" ";
        cout<<0<<endl;
        gh++;
        m--;
    }
}
