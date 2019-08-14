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
    int main()
    {
        init();
        int q;
        cin>>q;
        while(q--)
        {
            int n,cnt =0;
            cin>>n;
            int x[n];
            for(int i=0;i<n;i++)cin>>x[i];
            bool flag = false;
            for(int i = 0; i < n-1;i++)
            {
                if(abs(x[i]%n - x[i+1]%n)!= 1 && abs(x[i] - x[i+1])!= 1  )flag = true;
            }
            if(flag)cout<<"NO"<<endl;
            else cout<< "YES" <<endl;
        }
    }
