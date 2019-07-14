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
strcpy(char_array, s.c_str());
 */
int ans;
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
        int n,k;
        cin>>n>>k;
        int x[n];
        loop(n)
        cin>>x[i];
        int mx  = x[n-1];
        if(k==2)
        {
            int mn = *min_element(x+1,x+n);
            int mx = *min_element(x,x+(n-1));
            int a = max(x[0],mn);
            int b = max(x[n-1],mx);
            cout<<max(a,b);
            return 0;
        }
        sort(x,x+n);
        if(k>1)cout<<x[n-1];
        else cout<< x[0];
    }
