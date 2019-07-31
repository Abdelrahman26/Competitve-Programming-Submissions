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
    /*
    bool Valid(int x,int y)
    {
        return(x>=0&&y>=0&&x<=n&&y<=m);

    */
    /*
    int arr[N],lazy[N];
    struct segment
    {
        int count0,count1,count2;
        void add()
        {
            int temp = count0;
            count0   = count2;
            count2   = count1;
            count1   = temp;
        }
        void mergee(segment x, segment y)
        {
            count0 =x.count0 + y.count0;
            count1 =x.count1 + y.count1;
            count2 =x.count2 + y.count2 ;
        }
    }seg[N];
    void build (int node , int l,int r)
    {
        if(l > r)return;
        if(l==r)
        {
            seg[node].count0 = 1;
            seg[node].count1 = 0;
            seg[node].count2 = 0;
            return ;
        }
         int mid = (l+r)>>1;
        build(2*node,l,mid);
        build(2*node+1,mid+1,r);
        seg[node].mergee(seg[2*node],seg[2*node+1]);
    }
    void update(int node ,int ql, int qr,int l ,int r)
    {
        if(lazy[node]%3 == 1)
        {
            seg[node].add();
            if(l!=r)
            {
                lazy[2*node] += 1;
                lazy[2*node +1] +=1;
            }
        }
        else if(lazy[node]%3==2)
        {
            seg[node].add();
            seg[node].add();
            if(l != r)
            {
                lazy[2*node] += 2;
                lazy[2*node +1] +=2;
            }
        }

       lazy[node] = 0;
        if(l > r || l > qr || r < ql)
            return ;
        if(l >= ql && r <= qr)
        {
            seg[node].add();
            if(l!=r)
            {
                lazy [2*node] += 1;
                lazy[2*node+1]+= 1;
            }
            return;
        }
        int mid = l + r >> 1;
        update(2 *node,ql,qr,l,mid);
        update(2 *node + 1,ql,qr,mid+1,r);
        seg[node].mergee(seg[node*2],seg[node*2 + 1]);
    }
 segment query(int node, int ql, int qr,int l,int r)
    {
        segment ans;
        ans.count0 = 0;
        ans.count1 = 0;
        ans.count2 = 0;
        if(lazy[node]%3 == 1)
        {
            seg[node].add();
            if(l!=r)
            {
                lazy[2*node] += 1;
                lazy[2*node +1] +=1;
            }
        }
        else if(lazy[node]%3==2)
        {
            seg[node].add();
            seg[node].add();
            if(l != r)
            {
                lazy[2*node] += 2;
                lazy[2*node +1] +=2;
            }
        }

       lazy[node] = 0;
        if(ql <= l && qr >= r)
        {
            return seg[node];
        }
        if(l > r || l > qr || r < ql)
        {
            return ans;
        }
        int mid = l + r >> 1;
      segment left   =  query(2*node,ql,qr,l,mid);
      segment right  =  query(2*node+1,ql,qr,mid+1,r);
      ans.mergee(left , right);
      return ans ;
    }
    */int pre[N];
    int main()
    {
        init();
        int n,q;
        cin>>n>>q;
        int x[n+4]={0};
        loop(n)cin>>x[i+1];
        loop(q)
        {
            int l,r;
            cin>>l>>r;
            ++pre[l];
            --pre[r+1];
        }
        loop(n+3) pre[i] += pre[i-1];
        ll sum = 0,m = n;
        m++;
        sort(pre,pre+m);
        sort(x,x+m);
        for(int i=1;i<=n;i++)
        {
            sum += (ll)x[i]*pre[i];
        }
        cout<<sum;
    }



