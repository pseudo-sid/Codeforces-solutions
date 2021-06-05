#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        ll res = 8 * n * (n + 1) * (2 * n + 1) / 6;
        cout << res <<"\n";
    }
    return 0;
}