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

 ll cnt;
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
        ll ans = 0;
        int n;
        cin>>n;
        int x[n];
        int j,rem = 1;
        loop(n){
            cin>>x[i];
            if(x[i]==0)cnt++;
        }
        if(cnt == n)return cout<<0,0;

        bool flag = true;
        for(int i=0;i<n;i++)
        {
            int m = 0;
            if(x[i]==1)
                if(i+1!=n)
            if(x[i+1]==0){
                for( j=i+1;j<n;j++,i++)
                    if(x[j]==0)m++;
                    else break;
                }
                if(j!=n){
             if(flag) ans   = (m+1),flag = false;
                  else     ans  *= (m+1);
                }

            }
        if(ans == 0)ans = 1;
        cout<<ans;
    }


