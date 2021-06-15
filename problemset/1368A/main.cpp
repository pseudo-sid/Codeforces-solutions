#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int T;  cin >> T;
    while(T--){
        ll a; cin >> a;
        ll b; cin >> b;
        ll n; cin >> n;
        int ct = 0;
        while(a <= n and b <= n){
            if(a < b)
                a += b;
            else
                b += a;
            ct++;
        }
        cout << ct<<"\n";
    }
    return 0;
}