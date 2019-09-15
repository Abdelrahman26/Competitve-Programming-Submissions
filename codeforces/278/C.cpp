#include <bits/stdc++.h>
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
#define loop(n)  for(int i=0;i<n;i++)
#define loop(n) for(int i=0;i<n;i++)
#define endl '\n'
#define MAXNODES 100000+9
#define PB push_back
#define MP make_pair
#define OnlineJudgex
#define F first
#define S second
#define EPS 1e-9
#define PI acos(-1.0)
#define  precision(n)        cout << fixed << setprecision(n)
#define clr(v,d ) memset(v, d, sizeof(v))
#define MOD (int)1e9 + 7
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int,int> >vp;
using namespace std;
/*
string itos(t i){
 stringstream s;
 s << i;
 return s.str();
}
stoi()
strcpy(char_array, s.c_str());
 */
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
struct point
{
    double x, y;
    point()
    {
        x = y = 0.0;
    }
    point(double _x, double _y) : x(_x), y(_y) {}
    bool operator < (point other) const
    {
        if ((fabs(x - other.x) > EPS))
            return x < other.x;
        return y < other.y;
    }
    bool operator == (point other) const
    {
        return fabs(x-other.x) < EPS && fabs(y-other.y) < EPS;
    }
    point operator + (const point & p) const
    {
        return point(x + p.x, y + p.y);
    }
    point operator - (const point & p) const
    {
        return point(x - p.x, y - p.y);
    }
    double dot(const point & p) const
    {
        return x * p.x + y * p.y;
    }
    double cross(const point & p) const
    {
        return x * p.y - y * p.x;
    }
};
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
double dist(point p1, point p2)
{
    return hypot(p1.x - p2.x, p1.y - p2.y);
}
bool preceed(int x,int y)
{
    return x > y;
}
int dcmp(double a,double b)
{
    if ( fabs(a-b)  <= EPS )
        return  0 ;
    return 1;
}
const int N  = 1e5+9;
bool flag,ok;
 ll x[N + 1] ;
 ll y[N + 1] ;
 pair<pair<ll, ll> ,ll>arr[N + 1];
 ll z [N+1];
struct DSU{
    int parent[MAXNODES] ;
    int groupSize[MAXNODES] ;
    int count = 0;
        DSU(){
        for(int i = 0 ; i< MAXNODES; i++){
            parent[i] = i ;
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
        int leader1 = findLeader(x) ;
        int leader2 = findLeader(y) ;

        if(leader1 == leader2) return ;

        if(groupSize[leader1] > groupSize[leader2]){
            parent[leader2] = leader1 ;
            groupSize[leader1] += groupSize[leader2];
            count++;
        }
        else{
            parent[leader1] = leader2 ;
            groupSize[leader2] += groupSize[leader1];
            count++;
        }
    }
    int getSize(int x ){
        return groupSize[findLeader(x)] ;
    }

    };
    bool state[MAXNODES] ;
    int ans;
int main()
{
    init();
    DSU ds ;
    int n,m;
    bool fl = false;
    cin>>n>>m;
    loop(n)
    {
        int k;
        cin>>k;
        if(k == 0)
        {
            ans++;
            continue;
        }
        fl = true;
        if(k == 1)
        {
            int lll;
            cin>>lll;
            state[lll] = true;
            continue;
        }
        vector<int>st;
        for(int j = 0;j < k ; j++)
        {
            int gh;cin>>gh;
            state[gh] = true;
            st.push_back(gh);
        }
        loop(k - 1)
        {
          int a = ds.findLeader(st[i]);
          int b = ds.findLeader(st[i+1]);
          if(a != b)ds.mergeGroups(a,b);
        }
    }

    set<int>sto;
    loop(MAXNODES)
    {
        if(state[i])
        {
           sto.insert(ds.findLeader(i));
        }
    }
   if(fl) cout<<sto.size() - 1 + ans<<endl;
   else cout<<ans;
}


