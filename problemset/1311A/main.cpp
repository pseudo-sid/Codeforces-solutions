#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        ll a;   cin >> a;
        ll b;   cin >> b;
        if(a == b)
            cout << 0;
        else if ( a< b){
            if(a%2 == b % 2)
                cout << 2;
            else
                cout << 1;
        }
        else{
            if(a%2 == b%2)
                cout << 1;
            else
                cout << 2;
        }
        cout << "\n";
    }
    return 0;
}
