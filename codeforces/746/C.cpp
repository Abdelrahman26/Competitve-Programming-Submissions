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
    int main()
    {
        init();
        int s,x1,x2;
        cin>>s>>x1>>x2;
        int t1,t2;
        cin>>t1>>t2;
        int p , d;
        cin>>p>>d;
        int onFoot = abs(x1 - x2) * t2;
        int time = 0;
        if(d == -1)
        {
            if(p < x1)
            {
              time+= 2 * p * t1  + (x1 - p) * t1;
              if(x1 > x2)
            {
                time += 2 * (s - x1) * t1 + abs(x1 - x2) * t1;
            }
            else time += (x2 - x1) * t1;
            }
            else
            {
                time += (p - x1) * t1;
                if(x2 < x1)time += (x1 - x2) * t1;
                else time += 2 * x1 * t1 + abs(x1 - x2) * t1;
            }
        }
        else
        {
            if( p <= x1) {
                    time += (x1 - p) * t1;
                    if(x2 > x1)
                    {
                        time +=(x2 - x1) * t1;
                    }
                    else time += (s - x1) * 2 * t1 + (x1 - x2)*t1;
            }
            else
            {
                time += 2 * (s - p) * t1 + (p - x1) * t1;
                if(x2 < x1)
                {
                    time += (x1 - x2) * t1;
                }
                else
                    time += 2 * x1 * t1 + (x2 - x1) * t1;
            }
        }
        cout<<min(time, onFoot);

    }


