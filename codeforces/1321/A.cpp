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
    int n ;
    cin  >> n;
    int x [n] , y[n];
    loop(n)cin >> x[i];
    loop(n)cin >> y[i];
    int ans = 0 , cnty = 0;
    loop(n)
    {
        if(y[i] && !x[i])cnty++;
    }
    for(int i = 1 ;i < 105 ; i++)
    {
        ans = 0;
        for(int j = 0 ;j < n ;j++)
        {
            if(x[j] && x[j] != y[j])
            {
                ans += i;
            }
        }
        if(ans > cnty)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1;
}
