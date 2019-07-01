 #include <bits/stdc++.h>
    using namespace std;
    #define loop(n)  for(int i=0;i<n;i++)
    #define endl '\n'
    typedef long long ll;
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
        int t;
        cin>>t;
        while(t--){
            ll n,s,t;
            cin>>n>>s>>t;
             ll sec = (s+t) - n;
             cout<<max(s-sec,t-sec) + 1<<endl;
        }

            }
