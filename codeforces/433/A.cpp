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
    int arr[n];
    loop(n) cin >> arr[i];
    sort(arr,arr+n);
    int x  = arr[0] , y = 0;
    int one = 0 , two = 0;
    loop(n)
    {
        if(arr[i] == 100)one++;
        else two++;
    }
    if(one == 2 * two || (one % 2 == 0 && two % 2 == 0) || (two % 2 == 1 && one % 2  == 0 && one != 0))
            cout<<"YES";
    else cout<<"NO";
}
