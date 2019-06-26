    #include <bits/stdc++.h>
    using namespace std;
    #define loop(n)  for(int i=0;i<n;i++)
    #define endl '\n'
    typedef long long ll;
    using namespace std;
    const int pre = 1e5+5;
    int arr[pre];
    ll cnt,ans;
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
        double vp,vd,t,f,c,p=0,d=0;
        cin>>vp>>vd>>t>>f>>c;
        double pp =  t * vp, pd =0;
        if(vp>vd)return cout<<0,0;
        while(pp<c){
            double time = (pp-pd)/(vd-vp);// time dragon need TO reach to the queen.
            pp+= time*vp;
            if(pp>=c)break;
            ans++;
            double timeCave = pp / vd + f;
            pp+= timeCave * vp ;
        }
        cout<<ans;
    }
