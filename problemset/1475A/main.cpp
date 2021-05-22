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
        ll n;   cin >> n;
        if(n%2){
            cout <<"YES" <<endl;
        }
        else{
            while(n%2 == 0)
                n/=2;
            if(n == 1)
                cout << "NO" << endl;
            else
                cout << "YES" <<endl;
        }
    }
    return 0;
}
