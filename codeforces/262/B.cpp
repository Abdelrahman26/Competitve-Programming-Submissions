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
        int n,k;
        int mn = 1e5;
        cin>>n>>k;
        int x[n];
        loop(n){
            cin>>x[i];
            if(x[i]<0&&k>0)x[i]+=2*-x[i],k--;
            sum += x[i];
            if(x[i]<mn)mn = x[i];
        }
        if(k>0){
            if(k%2!=0)sum -= 2*mn;
        }
        cout<<sum;

            }

