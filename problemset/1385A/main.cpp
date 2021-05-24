#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    ll x,y,z;
    while(t--){
        cin>>x>>y>>z;
        if(x > y)swap(x,y);
        if(x > z)swap(x,z);
        if(y > z)swap(y,z);
        if(y == z){
            cout<<"YES\n";
            cout<<x<<" "<<x<<" "<<z<<endl;
        }
        else{
            cout<<"NO\n";
        }

        
    }
    return 0;
}
