 #include <bits/stdc++.h>
    using namespace std;
    #define loop(n)  for(int i=0;i<n;i++)
    #define endl '\n'
    #define MAXNODES 1000000+9
    typedef long long ll;
    typedef vector<int> vi;
    typedef vector<pair<int,int> >vp;
    using namespace std;
    struct point {
	double x, y;
    };
    /*
vector<vp> edges(MAXNODES),emptyEdges(MAXNODES);
bool visited[MAXNODES];
void dfs(int node)
{
   visited[node] = 1;
   for(int neighbor : edges[node])
        if(!visited[neighbor])
          dfs(neighbor);
}
*/
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
        int n,one=0,z=0;
        cin>>n;
        string x ;
        cin>>x;
        if(n%2==0){
                loop(n){
                if(x[i]=='1')one++;
                else z++;
                }
             if(one==z)
             {
                  cout<<2<<endl;
                  cout<<x[0]<<" "<<x.substr(1);
             }
             else
             {
                 cout<<1<<endl;
                 cout<<x;
             }
        }
        else {
            cout<<1<<endl;
            cout<<x;
        }


    }
