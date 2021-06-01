#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin >> n;
    ll x;   cin >> x;

    int c(0);

    for (int i = 1; i <= n; i++)
        if (x % i == 0 and x / i <= n) c++;

    cout << c << endl;
    return 0;
}
