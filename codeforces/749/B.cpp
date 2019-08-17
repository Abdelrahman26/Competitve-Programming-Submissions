#include <bits/stdc++.h>
    using namespace std;
  //  #define loop(n)  for(int i=0;i<n;i++)
    #define loop(n) for(int i=0;i<n;i++)
    #define endl '\n'
    #define MAXNODES 100000+9
    #define PB push_back
    #define MP make_pair
    #define OnlineJudge1
    #define F first
    #define S second
    #define EPS 1e-9
    #define PI acos(-1.0)
    #define  precision(n)        cout << fixed << setprecision(n)
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
   const int N  = 1e6;
   bool g [10000];
   bool ok;
   int cnt,ans;
   bool b [N];
    int main()
    {
        init();
        double x1,x2,x3,y1,y2,y3;
        cin>>x1>>y1;
       point a(x1,y1);
        cin>>x2>>y2;
       point b(x2,y2);
        cin>>x3>>y3;
       point c(x3,y3);
       cout<<'3'<<endl;
       point z = c + b - a;
       cout<<z.x<<" "<<z.y<<endl;
       z  =  c + a - b;
       cout<<z.x<<" "<<z.y<<endl;
       z  =  a + b - c;
       cout<<z.x<<" "<<z.y;
    }
