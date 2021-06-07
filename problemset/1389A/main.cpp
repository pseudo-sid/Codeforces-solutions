#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        ll l;   cin >> l;
        ll r;   cin >> r;

        if(l * 2 <= r)
            cout << l << " " << l * 2;
        else
            cout << -1 <<" " << -1;
        cout <<"\n";
    }

    return 0;
}
