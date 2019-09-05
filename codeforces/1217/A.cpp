
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
    #include <map>
    #include <set>
    #include <stack>
    #include <queue>
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
   bool flag,ok;
   int main()
    {
        init();
       int t;
       cin>>t;
       while(t--)
       {
           int a,b,c;
           cin>>a>>b>>c;
           if(c==0)
           {
               if(a>b) cout<<1;
               else cout<<0;
               cout<<endl;
               continue;
           }
           if(a+c <= b)
           {
               cout<<0<<endl;
               continue;
           }
            cout<<min((a + c - b + 1)  / 2 , c+1) ;
            cout<<endl;
       }
    }
