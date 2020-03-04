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
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        string y;
        cin >> y;
        map<string , int > arr;
        int k = 0 , r = 0;
        string A = y,Z = "";
        int ansy = 0;
        string x = y;
        for(int i = 0 ; i< n - 1;i++)
        {
            x = y;
            Z = "";
            for(int j = i ;j < n ;j++)
            {
                 Z += x[j];
            }
            if(n % 2)
            {
                if( (i + 1) % 2 == 0)
                for(int j = 0 ; j < i ;j++)
                     Z += x[j];
                else
                for(int j = i - 1 ; j >= 0 ;j--)
                     Z += x[j];
            }
            else
            {
                if( (i + 1) % 2)
                for(int j = 0 ; j < i ;j++)
                     Z += x[j];
                else
                for(int j = i - 1 ; j >= 0 ;j--)
                     Z += x[j];
            }
            if(Z < A)
            {
                A = Z;
            ansy  = i;
            }
        }
        reverse(y.begin() , y.end());
        if(y < A)
        {
            A = y;
        ansy  = n-1;
        }
        cout<<A<<endl;
        cout<<ansy + 1<<endl;
    }
}
