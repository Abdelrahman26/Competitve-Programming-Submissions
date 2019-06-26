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
        int x;
        cin>>x;
        for(int i=x;;x++)
{
sum = 0;
stringstream ss;
ss << x;
string str = ss.str();
for(int j=0;j<str.size();j++){
    sum += str[j] - '0';
}
    if(sum%4==0)return cout<<(x),0;
        }
    }
