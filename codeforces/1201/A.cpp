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
   const int N  = 1e6;
    int main()
    {
        init();
        int n,m;
        cin>>n>>m;
        string arr[n+1];
        ll ans = 0;
        loop(n)
        cin>>arr[i];
        int x[m+1];
        loop(m)
        cin>>x[i];
        int freq[150]={0} ;
        for(int j=0;j<m;j++){
            for(int  i=0;i<n;i++)
        {
          char h = arr[i][j];
          freq[h]++;
        }
        int b = *max_element(freq,freq+150);
        ans  += (ll)b * x[j];
        memset(freq,0,sizeof(freq));
        }
        cout<<ans;
    }



