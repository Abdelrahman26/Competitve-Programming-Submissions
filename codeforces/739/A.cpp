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
        int n,m;
        cin>>n>>m;
        int z = 2e9;
        loop(m)
        {
            int x,y;
            cin>>x>>y;
            if(y - x < z)z = y - x;
        }
        cout<< ++z<<endl;
            int i = 0;
            while(i<n){
            int j = 0;
            for(int k = 0; k<z && i<n ; k++)
            {
             cout<<j++<<" ";
             i++;
            }
        }


    }
