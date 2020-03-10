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
#define maxn 100009

/// <<------------------------------------------------------------------------------>>


/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int n , t;
    cin >> n >> t;
    int arr[n];
    string x;
    cin >> x;
    loop(t)
    {
        for(int j = 0 ; j < n - 1 ;j++)
        {
            if(x[j] == 'B' && x[j + 1] == 'G')
            {
                swap(x[j] , x[j+1]);
                j++;
            }
        }
    }
    cout<<x;
}
