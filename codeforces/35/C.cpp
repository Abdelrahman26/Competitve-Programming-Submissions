 #include <bits/stdc++.h>
    using namespace std;
    #define loop(n)  for(int i=0;i<n;i++)
    #define endl '\n'
    #define MAXNODES 100000+9
    #define PB push_back
    #define MP make_pair
    #define OnlineJudge
    #define F first
    #define S second
    typedef long long ll;
    typedef vector<int> vi;
    typedef vector<pair<int,int> >vp;
    using namespace std;
    struct point {
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
 void init(){
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
const int N  = 2e3 + 9;
int n,m,k,x,y,ansx = 1,ansy = 1;
bool Valid(int x,int y)
{
    return(x>0&&y>0&&x<=n&&y<=m);
}
int visited[N][N];
queue<pair<int,int > >q;
void BFS()
{
    int depth = 1,sz = q.size();
    for(;q.size();++depth ,sz = q.size())
    {
        while(sz--)
        {
            int x = q.front().F;
            int y = q.front().S;
            q.pop();
            for(int i =0;i<4;i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(Valid(nx,ny)&&!visited[nx][ny]){
                    q.push({nx,ny});
                    visited[nx][ny] = 1;
                    ansx = nx;
                    ansy = ny;
                }
            }
        }
    }
}
    int main()
    {
        init();
        cin>>n>>m>>k;
        loop(k)
        {
            cin>>x>>y;
            q.push({x,y});
            visited[x][y] = 1;
        }
        BFS();
        cout<<ansx<<" "<<ansy;

    }
