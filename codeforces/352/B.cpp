 #include <bits/stdc++.h>
    using namespace std;
    #define loop(n)  for(int i=0;i<n;i++)
    #define endl '\n'
    typedef long long ll;
    using namespace std;
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
 int sum;
 int cnt;
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
        int n;
        cin>>n;
        int arr[(int)1e5+3] = {0};
        int first[(int)1e5+3]= {0};
        int second[(int)1e5+3] ={0};
        int diff[(int)1e5+3] = {0};
        loop(n){
        int z ;
        cin>>z;
        if(arr[z]==0){
            first[z] = i;
        }
        else if(arr[z]==1){
            second[z] = i;
            diff[z] = i - first[z];
        }
        else{
            if(diff[z] == i - second[z]&&diff[z] != -10){
                second[z] = i ;
            }
            else diff[z] = -10;
        }
        arr[z]++;
        }
        for(int i=1;i<=(int)1e5;i++){
            if(diff[i]!=-10&&arr[i]!=0)cnt++;
        }
        cout<<cnt<<endl;
        for(int i=1;i<=(int)1e5;i++){
            if(arr[i] == 1) cout<<i<<" "<<0<<endl;
            else if(arr[i]>1&&diff[i] != -10)cout<<i<<" "<<diff[i]<<endl;
        }


            }
