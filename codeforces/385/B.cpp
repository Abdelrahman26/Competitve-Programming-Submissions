    #include <bits/stdc++.h>
    using namespace std;
    #define loop(n)  for(int i=0;i<n;i++)
    #define endl '\n'
    typedef long long ll;
    using namespace std;
    const int pre = 1e5+5;
    int arr[pre];
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
        int n,k,cnt=0;
        string x;
        cin>>x;
        n = x.size();
        if(n<4)return cout<<0,0;
                string z = "bear";
        for(int i=0;i<x.size()-3;i++){
            for(int j=i;j<x.size()-3;j++){
                    k = j+3;
                if(x.substr(j,4)==z){
                        cnt += n-k;
                break;
                }
            }
        }
        cout<<cnt;

            }

