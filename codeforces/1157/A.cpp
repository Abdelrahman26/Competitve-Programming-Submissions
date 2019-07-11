 #include <bits/stdc++.h>
    using namespace std;
    #define loop(n)  for(int i=0;i<n;i++)
    #define endl '\n'
    #define MAXNODES 100000+9
    #define PB push_back
    #define MP make_pair
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
 */
int ans;
bool visited[MAXNODES];
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
        string n;
        cin>>n;
        int e = n.size();
        for(int i=1;i<n.size();i++)
        {
            ans += 9 - (int)(n[i] - '0') ;
        }
         ans +=9;
         if(n.size()>1)ans++;
         cout<<ans;
    }
