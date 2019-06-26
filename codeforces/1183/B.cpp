    #include <bits/stdc++.h>
    using namespace std;
    #define loop(n)  for(int i=0;i<n;i++)
    #define endl '\n'
    typedef long long ll;
    using namespace std;
    const int pre = 1e5+5;
    int arr[pre];
    ll cnt,ans;
/*
    string itos(t i){
 stringstream s;
 s << i;
 return s.str();
 }
 */int sum;
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
        int q;
        cin>>q;
        while(q--){
            int n,k;
            cin>>n>>k;
            int x[n];
            loop(n)cin>>x[i];
            int mn = *min_element(x,x+n);
            int mx = *max_element(x,x+n);
            mn = k + mn;
            mx = abs(k-mx);
            bool f = false,t = false;
            for(int i=0;i<n;i++){
                if(abs(x[i]-mn)>k||mn<=0){
                    f = true;
                    break;
                }
            }
                for(int i=0;i<n;i++){
                if(abs(x[i]-mx)>k||mx<=0){
                    t = true;
                    break;
                }
                }
                if(t==false&&f==false )cout<<max(mx,mn);
                else if(t==false)cout<<mx;
                else if(f==false )cout<<mn;
                else cout<<-1;
                cout<<endl;

        }
        }
