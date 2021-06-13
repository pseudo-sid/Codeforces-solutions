#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int T;  cin >> T;
    while(T--){
        ll a;   cin >> a;
        ll b;   cin >> b;
        ll n;   cin >> n;
        ll s1 = 0, s2 = 0;

        s1 = (n -a)/b + 1;
        s2 = (n -b)/a + 1;
        cout << min(s1,s2) << "\n";
    }
    return 0;
}
