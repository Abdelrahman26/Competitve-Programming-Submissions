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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int sum=0,p = 0;
        int n;
        cin>>n;
        pair<pair<int ,int> ,int> x[n];
        loop(n){
        int a,b,c;
        cin>>a>>b>>c;
        x[i] = make_pair(make_pair(a,b),c);
        }
        for(int i=min(a,c);i<=max(a,c);i++){
            for(int  j=min(b,d);j<=max(b,d);j++){
                    sum++;
                if(j!=b&&j!=d){
                    if(i!=a&&i!=c){
                            sum--;
                        continue;
                    }
                }
                int w,l;
                for(int k=0;k<n;k++){
                       w  = pow(x[k].first.first - i ,2);
                       l  = pow(x[k].first.second - j,2);
                   if(((w+l))<=x[k].second*x[k].second){
                    p++;
                    break;
                   }
                }
            }
        }
         cout<<sum - p;

            }
