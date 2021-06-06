#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    long t;  cin >> t;
    while(t--){
        ll n;  cin >> n;
        n /= 2;
        ll res = 8 * n * (n + 1) * (2 * n + 1) / 6;
        cout << res <<"\n";
    }
    return 0;
}