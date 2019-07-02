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
  //  const int pre = 1e2+5;
  //  int arr[pre];
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
        int n;
        cin>>n;
        string s ;
        cin>>s;
        vector<vi>vr(125);
        loop(n)
        {
            vr[s[i]].push_back(i);
        }
        int m;
        cin>>m;
        while(m--){
            string t;
            cin>>t;
            int ans = 0;
            vi counter(125);
            for(char x : t){
                ans = max(ans,vr[x][counter[x]]);
                counter[x]++;
            }
            cout<<ans + 1<<endl;
        }

    }


