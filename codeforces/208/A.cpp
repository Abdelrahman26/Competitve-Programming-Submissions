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
    string x;
    cin >> x;
    int n = x.size();
    string rem = "WUB";
    for(int i = 0 ; i < n - 2; i++ )
    {
        string a = x.substr(i,3);
        if(a == rem)
        {
            int k = i + 3;
            for(int j = i ; j < k;j++)
                x[j] = '*';
        }
    }
    bool ok = 0;
    for(int i = 0 ; i < n ;i++)
    {
        if(x[i] != '*')
        {
            ok = 1;
            cout<<x[i];
        }
        else if(ok)
        {
            cout<<" ";
            ok = 0;
        }

    }
}
