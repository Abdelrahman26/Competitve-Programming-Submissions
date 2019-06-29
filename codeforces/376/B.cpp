    #include <bits/stdc++.h>
    using namespace std;
    #define loop(n)  for(int i=0;i<n;i++)
    #define endl '\n'
    typedef long long ll;
    using namespace std;
    const int pre = 1e5+5;
    int arr[pre];
    ll cnt;
/*
    string itos(t i){
 stringstream s;
 s << i;
 return s.str();
 }
 */
 /*
 stoi()
 */
 int sum;
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
        int n,m,a,b,c;
        cin>>n>>m;
        int from[n+1]={0};
        int to  [n+1]={0};
        while(m--){
            cin>>a>>b>>c;
            to[a]+=c;
            from[b]+=c;
        }
        for(int i=1;i<=n;i++){
            if(from[i]>to[i])cnt+= from[i] - to[i];
        }
        cout<<cnt;

            }

