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
        int n;
        cin>>n;
        int x[n];
        loop(n)cin>>x[i];
        deque<int>de;
        sort(x,x+n);
        if(n==3)
        {
            if(x[2]<x[1]+x[0])
            {
                cout<<"YES"<<endl;
                cout<<x[0]<<" "<<x[1]<<" "<<x[2];
            }
            else cout<<"NO";
            return 0;
        }
        reverse(x,x+n);
        for(int i= 0;i<n;i++)
        {
            if(i==2||i==1)continue;
            if(i==0)
            {
                if(x[0]<x[1]+x[2])de.push_back(x[0]),de.push_back(x[1]),de.push_front(x[2]);
                else return cout<<"NO",0;
            }
            else if(i==n-1)
            {
                if(x[n-1]<x[n-2]+x[2])de.push_back(x[n-1]);
                else return cout<<"NO",0;
            }
            else
            {
                if(x[i]<x[i-1]+x[i+1])de.push_back(x[i]);
                else return cout<<"NO",0;
            }
        }
        cout<<"YES"<<endl;
         loop(n)
         {
             cout<<de[i]<<" ";
         }

    }


