#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    ll n;
    while(t--){
        cin >>  n;
        ll count = 0;
        for(ll digit = 1; digit <= 9; digit++){
            ll cur = digit;
            for(ll rep = 1; rep <= 10; rep++){
                if(cur <= n){++count;}
                else{break;}
                cur = 10 * cur + digit;
            }
        }
        cout << count <<"\n";
    }
    return 0;
}
