#include <bits/stdc++.h>
    using namespace std;
    #define loop(n)  for(int i=0;i<n;i++)
    #define endl '\n'
    #define MAXNODES 100000+9
    #define PB push_back
    #define MP make_pair
    typedef long long ll;
    typedef vector<int> vi;
    typedef vector<pair<int,int> >vp;
    using namespace std;
    struct point {
	double x, y;
    };
/*
string itos(t i){
 stringstream s;
 s << i;
 return s.str();
 }
 stoi()
  strcpy(char_array, s.c_str());
 */
int ans;
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
        int n;
        cin>>n;
        string x;
        cin>>x;
        char c[n];
        bool flag = false;
        strcpy(c, x.c_str());
        vector<int>st(10);
        for(int i=1;i<=9;i++)cin>>st[i];
        for(int i=0;i<n;i++)
        {
            int a =  c[i]-'0';
            int b =  st[a];
            if(flag==true&&a>b)break;
            if(a<b)
            {
                c[i] = b +'0';
                flag = true;
            }
        }
        loop(n)cout<<c[i];
    }
