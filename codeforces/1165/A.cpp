 #include <bits/stdc++.h>
    using namespace std;
    #define loop(n)  for(int i=0;i<n;i++)
    #define endl '\n'
    typedef long long ll;
    typedef vector<int> vi;
    using namespace std;
    struct point {
	double x, y;
    };
    const int pre = 1e2+5;
    int arr[pre];
/*
    ll cnt;

    string itos(t i){
 stringstream s;
 s << i;
 return s.str();
 }
 */
 /*
 stoi()
 */

 int cnt;
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
        int ans = 0;
        int n,x,y;
        cin>>n>>x>>y;
        string s,t,r ;
        cin>>s;
        t = s.substr(n-x);
        loop(t.size()){
        if(t[i]=='1')ans++;
        }
        if(t[t.size()-y-1] == '1')ans--;
        if(t[t.size()-y-1] == '0')ans++;
        cout<<ans;
    }


