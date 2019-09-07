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
    struct point{
	double x, y;
    point() {x = y = 0.0;}
    point(double _x, double _y) : x(_x), y(_y) {}
    bool operator < (point other) const {
        if ((fabs(x - other.x) > EPS))
            return x < other.x;
        return y < other.y;
    }
        bool operator == (point other) const {
        return fabs(x-other.x) < EPS && fabs(y-other.y) < EPS;
    }
    point operator + (const point & p) const { return point(x + p.x, y + p.y); }
	point operator - (const point & p) const { return point(x - p.x, y - p.y); }
    double dot(const point & p) const { return x * p.x + y * p.y; }
	double cross(const point & p) const { return x * p.y - y * p.x; }
    };
    int dx[] = {1,-1,0,0};
    int dy[] = {0,0,1,-1};
    double dist(point p1, point p2){
    return hypot(p1.x - p2.x, p1.y - p2.y);
    }
    int dcmp(double a,double b)
    {
        if ( fabs(a-b)  <= EPS )return  0 ;
        return 1;
    }
   const int N  = 1e5+6;
   int main()
    {
        init();
        int n;
        cin>>n;
        int k1 , k2 ;
        deque<int>A1 , A2;
        cin>>k1;
        loop(k1)
        {
            int x;
            cin>>x;
            A1.push_back(x);
        }
        cin>>k2;
        loop(k2)
        {
            int y;
            cin>>y;
            A2.push_back(y);
        }
        for(int i=1;i< 1100 ;i++)
        {
            int x,y;
            x = A1.front();
            y = A2.front();
            A1.pop_front();
            A2.pop_front();
            if(y>x)
            {
                A2.push_back(x);
                A2.push_back(y);
            }
            else
            {
                  A1.push_back(y);
                  A1.push_back(x);
            }
            if(A1.empty())return cout<<i<<" "<<2,0;
            else if(A2.empty())return cout<<i<<" "<<1,0;
        }
        cout<<-1;

    }
