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
        string x;
        cin>>x;
        stack<int> st;
        loop(x.size()){
        if(x[i]=='(')st.push(x[i]);
        else {
            if(!st.empty()&&st.top()=='('){
                st.pop();
                cnt+=2;
               }
               else st.push(x[i]);

        }
        }
        cout<<cnt;
    }
