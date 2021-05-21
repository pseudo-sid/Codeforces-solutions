#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int t;  cin >> t;
    while(t--){
        ll n;   cin >> n;
        if(n%2)
            cout << n/2 +1 << endl;
        else
            cout << n/2 << endl;
    }
    return 0;
}