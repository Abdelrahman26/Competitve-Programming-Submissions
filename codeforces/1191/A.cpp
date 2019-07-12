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
 bool st [5];
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
        int n;
        cin>>n;
        if(n%4==1)return cout<<0<<" "<<'A',0;
        pair<char,int>p[5];
        int y = n%4;
        p[y].first = 10;p[y].second = 0;
        y = (n+1)%4;
            p[y].first = 10;p[y].second = 1;
        y = (n+2)%4;
            p[y].first = 10;p[y].second = 2;
        if(p[1].first==10){
            cout<<p[1].second<<" "<<'A';
        }
         else if(p[3].first==10){
            cout<<p[3].second<<" "<<'B';
        }
        else if(p[2].first==10){
            cout<<p[2].second<<" "<<'C';
        }
         else if(p[0].first==10){
            cout<<p[0].second<<" "<<'D';
        }


    }
