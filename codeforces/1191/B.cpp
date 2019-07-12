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
  int m,p,s;
 bool st [5];
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
        string a,b,c;
        cin>>a>>b>>c;
        int x,y,z;
        if(a[1]==b[1]&&b[1]==c[1])
        {
            x = a[0]-'0';
            y = b[0]-'0';
            z = c[0]-'0';
            int arr [] ={x,y,z};
            sort(arr,arr+3);
            if(x==y&&y==z)cout<<0;
            else if(arr[2]-arr[1] == arr[1]-arr[0] && arr[1]-arr[0] == 1)cout<<0;
            else if((abs(x-y)<=2)||abs(x-z)<=2||abs(z-y)<=2){
            cout<<1;
            }
            else cout<< 2;
                return 0;
        }
        else if(a[1]==b[1])
        {
              x = a[0]-'0';
              y = b[0]-'0';
              if(abs(x-y)<=2)cout<<1;
              else cout<<2;
              return 0;
        }
        else if(a[1]==c[1])
        {
              x = a[0]-'0';
              y = c[0]-'0';
              if(abs(x-y)<=2)cout<<1;
              else cout<<2;
              return 0;
        }
         else if(b[1]==c[1])
        {
              x = b[0]-'0';
              y = c[0]-'0';
              if(abs(x-y)<=2)cout<<1;
              else cout<<2;
              return 0;
        }
        else cout<<2;



    }
