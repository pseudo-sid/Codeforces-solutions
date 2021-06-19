#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        long long n; cin >> n;
        long long m; cin >> m;
        long long x; cin >> x;
        --x;
        long long row = x % n;
        long long col = x / n;
        long long res = row * m + col + 1;
        cout << res << "\n";
    }
    return 0;
}
