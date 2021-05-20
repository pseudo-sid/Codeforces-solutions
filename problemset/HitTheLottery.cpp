#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long int n; cin >> n;
    long int ans = 0;
    int denominations[] = {1, 5, 10, 20, 100};
    for(int i = 4; i >= 0; i -- ){
        if(n >= denominations[i]){
           int c = n / denominations[i];
           ans += c;
           n -= c * denominations[i];
        }
    }
    cout << ans << endl;
    return 0;
}
