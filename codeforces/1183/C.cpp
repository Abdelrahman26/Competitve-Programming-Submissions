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
            int n,k,a,b,x=0,y=0;
            cin>>k>>n>>a>>b;
            bool flag = false ;
            ll f = 0,  l= n;
            ll mid;
             while(l>=f){
                mid = f +(l-f)/2;
                ll w = n-mid;
                ll newK = k-(a*mid);
                if((a*mid)<(k)&& b*w< newK){
                     f =mid+1;
                     cnt = mid;
                     flag = true;
                }
                else l = mid - 1;

            }
            if(flag == false)cout<<-1<<endl;
            else cout<<cnt<<endl;

        }
    }
