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
    #define INF (int) 2e9;
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
    char sts[3][3]={{'R','G','B'},{'G','B','R'},{'B','R','G'}};
    int ans = INF;
    int main()
    {
        init();
          int q;
          cin>>q;
          while(q--)
          {
              ans = INF
              int n,k;
              string s;
              cin>>n>>k;
              cin>>s;
              for(int i=0;i<= n - k; i++)
              {
                  for(int l = 0;l<3;l++)
                  {
                      int a = 0,res = 0;
                      for(int j=0;j<k;j++)
                      {
                          if(s[i+j]!= sts[l][a])res++;
                          a = (a+1) % 3;
                      }
                      ans = min(ans,res);
                  }
              }
              cout<<ans<<endl;
          }





    }
