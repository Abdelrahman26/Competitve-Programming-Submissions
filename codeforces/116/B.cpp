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
    cin >> n >> m;
    char arr[n][m];
    int ans = 0;
    loop(n)
    {
        for(int j = 0 ; j < m ;j++)
            cin >> arr[i][j];
    }
    for(int i = 0 ; i < n ;i++)
    {
        for(int j = 0 ;j < m;j++)
        {
            if(arr[i][j] == 'P')
                for(int k = 0 ; k < 4 ;k++)
                {
                  int nx = dx[k] + i;
                  int ny = dy[k] + j;
                  if(valid(nx,ny) && arr[nx][ny] == 'W')
                  {
                      arr[nx][ny] = '.';
                      ans++;
                      break;
                  }
                }
        }
    }
    cout<<ans<<endl;
}
