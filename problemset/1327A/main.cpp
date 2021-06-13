#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool DistinctOddSum(ll n, ll k)
{
    // Condition to check if there
    // are enough values to check
    return ((k * k) <= n and (n + k) % 2 == 0);
}
int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        ll n; cin >> n;
        ll k; cin >> k;
        if(DistinctOddSum(n,k))
            cout <<"YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
