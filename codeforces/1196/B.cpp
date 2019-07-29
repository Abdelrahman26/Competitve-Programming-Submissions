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
             int n,k;
             cin>>n>>k;
             int x[n] ,cnt = 0;
             loop(n)
             {
                 cin>>x[i];
                 if(x[i] % 2 != 0)cnt++;
             }
             if(cnt < k|| (cnt - k)%2==1){
                    cout<<"NO"<<endl ;
             continue;
             }
             else
             {
                 cout<<"YES"<<endl;
                 loop(n)
                 {
                     if(k==1)break;
                     if(x[i]%2 != 0){
                            cout<<i+1<<" ";
                            k--;
                     }
                 }
             }
              cout<<n<<endl;
          }





    }
