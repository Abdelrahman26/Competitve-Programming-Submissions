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
    int t;
    cin >> t;
    while(t--)
    {
        int state = 0;
        int n;
        cin >> n;
        bool check[2*n + 1] = {false};
        int arr[n];
        vector<int>vi;
        check[0] = 1;
        loop(n)
        {
            cin >> arr[i];
            check[arr[i]] = true;
        }
        for(int i = 0 ; i < n ;i++)
        {
            bool ok = 0;
            if(!ok)
            {
                for(int j = arr[i] + 1 ; j <= 2* n ; j++)
                {
                    if(!check[j])
                    {
                        check[j] = 1;
                        ok = 1;
                        vi.push_back(arr[i]);
                        vi.push_back(j);
                        break;
                    }
                }
            }
            if(!ok)
            {
                state = 1;
            }
        }
        if(state)cout<<-1;
        else loop(vi.size())cout<<vi[i]<<" ";
            cout<<endl;
    }
}
