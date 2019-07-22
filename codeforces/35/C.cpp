 #include <bits/stdc++.h>
    using namespace std;
    #define loop(n)  for(int i=0;i<n;i++)
    #define endl '\n'
    #define MAXNODES 100000+9
    #define PB push_back
    #define MP make_pair
    #define write_to_file() freopen("output.txt" , "w" , stdout)
    #define read_from_file() freopen("input.txt" , "r" , stdin)
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
 int  d  [2009][2009]={};
 int arr [2009][2009]={};
 int n,m;
 void bfs(int x,int y,int number)
 {
      queue<pair<int,pair<int,int > > >q;
      q.push({number,{x,y}});
      d[x][y] = 1;
       while(q.size())
       {
           int nodeX = q.front().second.first;
           int nodeY = q.front().second.second;
           int depth = q.front().first;
           q.pop();
           if(arr[nodeX][nodeY]) arr[nodeX][nodeY] =min(arr[nodeX][nodeY],depth);
           else arr[nodeX][nodeY] = depth;
               if(nodeX+1<n && !d[nodeX+1][nodeY] )
                q.push({depth+1,{nodeX+1,nodeY}}),d[nodeX+1][nodeY] = 1;
                if(nodeX-1>0&&!d[nodeX-1][nodeY])
                    q.push({depth+1,{nodeX-1,nodeY}}),d[nodeX-1][nodeY] = 1;
                if(nodeY+1<m&&!d[nodeX][nodeY+1])
                    q.push({depth+1,{nodeX,nodeY+1}}),d[nodeX][nodeY+1] = 1;
                    if(nodeY-1>0&& !d[nodeX][nodeY-1])
                 q.push({depth+1,{nodeX,nodeY - 1}}),d[nodeX][nodeY-1] = 1;
       }
 }
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
         read_from_file();
        write_to_file();
        cin>>n>>m;
        n++,m++;
        int u,v,k,mn = -1,l,r;
        cin>>k;
        loop(k)
        {
            cin>>u>>v;
            bfs(u,v,1);
            loop(n+1)
            for(int j=0;j<m+1;j++)d[i][j] = 0;
        }
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++){
              if(arr[i][j] > mn){
                    mn = arr[i][j];
              l = i, r=j;
            }
            }
            cout<<l<<" "<<r;


    }
