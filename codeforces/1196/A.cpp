    #include <bits/stdc++.h>
    using namespace std;
    #define loop(n)  for(int i=0;i<n;i++)
    #define endl '\n'
    #define MAXNODES 100000+9
    #define PB push_back
    #define MP make_pair
    #define OnlineJudge1
    #define F first
    #define S second
    typedef long long ll;
    typedef vector<int> vi;
    typedef vector<pair<int,int> >vp;
    using namespace std;
    struct point
    {
        double x, y;
    };

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
    int dx[] = {1,-1,0,0};
    int dy[] = {0,0,1,-1};
    const int N  = 22 + 9;

    int main()
    {
        init();
        ll a,b,c,q;
        cin>>q;
        while(q--)
        {
            cin>>a>>b>>c;
            cout<<(a+b+c)/2<<endl;
        }




    }
