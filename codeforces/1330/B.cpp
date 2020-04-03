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
#include <stdio.h>
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
ll S(ll x){ll s = 0;while(x){s += x % 10;x /= 10;}return s;} /// sum of digits.
ll powe(ll a , ll n){if(n == 1)return a;return a * powe(a ,n-1);}
ll com(int n,int m){ll z = 1;for(int i = 0; i < m;i++){z = z * ( n - i) / (i + 1) ;}return z;}
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int dr[] = {0,0,0,1,1,1,-1,-1,-1};
int dc[] ={-1,0,1,-1,0,1,-1,0,1};
/// <<------------------------------------------------------------------------------>>


/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        loop(n)cin >> arr[i];
        set<int>st;
        int j = 0;
        for(int i = 0 ;i < n;i++)
        {
            if(st.empty() || (!st.empty() && st.find(arr[i]) == st.end()))
                st.insert(arr[i]);
            else
            {
                j = i;
                break;
            }
        }
        vector<pair<int,int> >cnt;
        set<int>rem;
        for(int i = j ; i < n ;i++)
        {
             if(rem.empty())rem.insert(arr[i]);
             else if(!rem.empty() && rem.find(arr[i]) == rem.end())
                rem.insert(arr[i]);
            else break;
        }
        int A = 0 ,B = 0 , C = 0 ,D = 0 , ans = 0;
        if(st.size() == *st.rbegin()) A = st.size();
        if(rem.size()== *rem.rbegin())B= rem.size();
        if(A + B == n)
        {
            ans++;
            cnt.push_back({A,B});
        }
        st.clear();rem.clear();
        j = 0;
        for(int i = n -1 ;i >= 0 ;i--)
        {
            if(st.empty() || (!st.empty() && st.find(arr[i]) == st.end()))st.insert(arr[i]);
            else
            {
                j = i;
                break;
            }
        }
        for(int i = j ; i>= 0 ;i--)rem.insert(arr[i]);
        if(st.size() == *st.rbegin())C = st.size();
        if(rem.size()== *rem.rbegin())D= rem.size();
        if(C + D == n)
        {
            if(C != B)
            {
                    ans++;
                    cnt.push_back({D,C});
            }
        }
        cout<<ans<<endl;
        loop(ans)
          cout<<cnt[i].F<<" "<<cnt[i].S<<endl;
    }

}
