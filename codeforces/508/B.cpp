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
        int even = -1 , index,gh,even2 , index2;
        loop(x.size())
        {
            gh = x[i] - '0';
            if(gh % 2 == 0 && gh < x[x.size()-1] - '0')
            {
                swap(x[i] , x[x.size()-1]);
                return cout<< x , 0;
            }
        }
        for(int i = x.size() - 1 ; i >= 0 ; i--)
        {
            gh = x[i] - '0';
            if(gh % 2 == 0)
            {
                swap(x[i] , x[x.size()-1]);
                return cout<< x , 0;
            }
        }
        cout<<-1;
}
