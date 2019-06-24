    #include <bits/stdc++.h>
    using namespace std;
    #define loop(n)  for(int i=0;i<n;i++)
    #define endl '\n'
    typedef long long ll;
    using namespace std;
    const int pre = 1e5+5;
    int arr[pre];
    ll cnt;
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
        int n;
        cin>>n;
        int x[n];
        loop(n) cin>> x[i];
        int z[6]={0};
        for(int i=0;i<n;i++){
            if(x[i] == 4){
                z[0]++;
            }
            else if(x[i]==8&&z[0]!=0){
                if(z[1]<z[0]){
                    z[1]++;
                }
            }
             else if(x[i]==15&&z[1]!=0){
                if(z[2]<z[1]){
                    z[2]++;
                }
            }
            else if(x[i]==16&&z[2]!=0){
                if(z[3]<z[2]){
                    z[3]++;
                }
            }
            else if(x[i]==23&&z[3]!=0){
                if(z[4]<z[3]){
                    z[4]++;
                }
            }
            else if(x[i]==42&&z[4]!=0){
                if(z[5]<z[4]){
                    z[5]++;
                }
            }
        }
        cnt = z[5];
        cout<< n - cnt*6;
        }
