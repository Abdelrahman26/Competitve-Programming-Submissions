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
     int a[N],seg[N];
     bool flag [N];
    void update(int p,int l,int r,int index ,int Nvalue)
    {
        if(l==r)
        {
            seg[p] = Nvalue;
            return;
        }
        int mid = l + (r-l) / 2;
        if(index <= mid)update(2*p,l,mid,index,Nvalue);
        else update(2*p+1,mid+1,r,index,Nvalue);
         if(flag[2*p]) {
            flag[p] = false;
             seg[p]  = seg[2*p] | seg[2*p +1];
      }
      else{
        flag[p] = true;
        seg[p]  = seg[2*p] ^ seg[2*p +1];
      }
    }
    int x[N],k = 1;
    void build(int p , int l ,int r)
    {
        if(l==r)
        {
             seg[p] = x[k++];
            flag[p] = true;
            return ;
        }
        int mid = l + (r-l) / 2;
        build(2*p,l,mid);
        build(2*p+1,mid+1,r);
         if(flag[2*p]) {
            flag[p] = false;
            seg[p]  = seg[2*p] | seg[2*p +1];
      }
      else{
        flag[p] = true;
        seg[p]  = seg[2*p] ^ seg[2*p +1];
      }
    }
    int main()
    {
        init();
        int n,q;
        cin>>n>>q;
        double d = pow(2,n);
        int s    = (int) d;
        loop(s)
        {
            cin>>x[i+1];
        }
        build(1,1,s);
        loop(q)
        {
            int u,v;
            cin>>u>>v;
            update(1,1,s,u,v);
            cout<<seg[1]<<endl;
        }
    }



