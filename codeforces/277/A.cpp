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
  const int MAXNODES = 1000;
   struct DSU{
    int parent[MAXNODES];
    int groupSize[MAXNODES];

    DSU(){
        for(int i = 0 ; i< MAXNODES; i++){
            parent[i] =i ;
            groupSize[i] =1 ;
        }
    }
    int findLeader(int node){
        if(parent[node] == node)
            return node ;
        return parent[node] = findLeader(parent[node]);
    }

    bool sameGroup(int x , int y){
        int leader1 = findLeader(x);
        int leader2 = findLeader(y);
        return leader1 == leader2 ;
    }
    void mergeGroups(int x, int y){
        int leader1 = findLeader(x);
        int leader2 = findLeader(y);
        if(leader1 == leader2) return ;

        if(groupSize[leader1] > groupSize[leader2]){
            parent[leader2] = leader1 ;
            groupSize[leader1] += groupSize[leader2];
            //mn[leader1] = min(mn[leader1],mn[leader2]);
        }
        else{
            parent[leader1] = leader2 ;
            groupSize[leader2] += groupSize[leader1];
           // mn[leader2] = min(mn[leader1],mn[leader2]);
        }
    }
    int getSize(int x ){
        return groupSize[findLeader(x)] ;
    }
};
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int n ,m;
    cin >> n >> m;
    DSU gh;
    set<int>st;
    int ans = 0;
    loop(n)
    {
        vi v;
        int k;cin >> k;
        if( k== 0)ans++;
        for(int j = 0 ;j < k ;j++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            st.insert(x);
        }
        for(int j = 0 ;j < k - 1;j++)
        {
            if(!gh.sameGroup(v[j] ,v[j+1]))
            {
                gh.mergeGroups(v[j] , v[j+1]);
            }
        }
    }
    vi rem;
    for(auto value : st)
    {
        rem.push_back(value);
    }
    int u = rem.size() - 1;
    loop(u)
    {
        if(!gh.sameGroup(rem[i] , rem[i+1]))
        {
            gh.mergeGroups(rem[i] , rem[i+1]);
            ans++;
        }
    }
    cout<<ans<<endl;
}
