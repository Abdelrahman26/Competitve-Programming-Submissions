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
                int sum = 0;
            int n;
            cin>>n;
            int qr[n+1]={0};
            loop(n){
            int k;
            cin>>k;
            qr[k]++;
            }
            map<int,int>mp;
            for(int i=1;i<=n;i++){
                mp[qr[i]]++;
            }
            bool x[n+1] ={false};
            for(int i=n,j=n-1;i!=0;i--){
                    if(j>=i)j=i-1;
                if(mp[i]>0){
                 if(x[i]==false)  {  x[i] = true; sum+=i; }
                 else ++mp[i];
                    if(--mp[i]>0){
                        while(j>0&&mp[i]>0){
                                if(i!=j)
                            if(x[j]==false){
                                x[j] = true;
                                --mp[i];
                                sum+=j;
                            }
                        j--;
                        }
                    }
            }
            }
          cout<<sum<<endl;
        }
    }
