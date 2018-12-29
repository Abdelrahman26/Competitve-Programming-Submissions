#include <iostream>


using namespace std;

int main()
{
    int num;
    string senc ;
    cin>> num ;
    cin.ignore();
    for(int i = 0; i<num ; i++){
        getline(cin,senc);
        if(senc.size()<5)
        {
               cout<< "OMG>.< I don't know!" <<endl;
               continue;
        }
        else if(senc.substr(0,5) == "miao." && senc.substr(senc.size()-5,5)!="lala."){
            cout<< "Rainbow's" <<endl;
        }
        else if(senc.substr(0,5) != "miao." && senc.substr(senc.size()-5,5)=="lala."){
            cout<< "Freda's" <<endl;
        }
        else
        {
            cout<< "OMG>.< I don't know!" <<endl;
        }

    }
    return 0;
}
