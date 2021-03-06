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
    vector<char>x,y;
    /*
    bool Valid(int x,int y)
    {
        return(x>=0&&y>=0&&x<=n&&y<=m);
    }
    */
    struct DSU{
    int parent[MAXNODES] ;
    int groupSize[MAXNODES] ;
    DSU(){
        for(int i = 0 ; i< MAXNODES; i++){
            parent[i] =i ;
            groupSize[i] =1 ;
        }
    }
    int findLeader(int node){
        if(parent[node] == node)
            return node ;
        return parent[node] = findLeader(parent[node]);
    }

    bool sameGroup(int x , int y){
        int leader1 = findLeader(x);
        int leader2 = findLeader(y);
        return leader1 == leader2 ;
    }

    void mergeGroups(int x, int y){
        int leader1 = findLeader(x) ;
        int leader2 = findLeader(y) ;

        if(leader1 == leader2) return ;

        if(groupSize[leader1] > groupSize[leader2]){
            parent[leader2] = leader1 ;
            groupSize[leader1] += groupSize[leader2];
        }
        else{
            parent[leader1] = leader2 ;
            groupSize[leader2] += groupSize[leader1];
        }
    }

    int getSize(int x ){
        return groupSize[findLeader(x)] ;
    }

    };

    int main()
    {
        init();
        DSU g ;
        int n,cnt = 0;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int j=0;
        for(int i =0; i < n; i++)
        {
            int l =(a[i]-'0'-48);
            int r =(b[i]-'0'-48);
            if(!g.sameGroup(l,r)) {
                g.mergeGroups(l,r);
                cnt++;
                x.push_back(a[i]);
                y.push_back(b[i]);
            }
        }
        cout<<cnt<<endl;
        loop(cnt)
        {
            cout<<x[i]<<" "<<y[i]<<endl;
        }

    }
