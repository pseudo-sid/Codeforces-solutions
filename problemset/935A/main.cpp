#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int i, j, k;
    int n, m, x;

    cin >> n;
    ll cnt = 0; x = 1;
    while(true){
        if(x > n - x)
            break;
        
        m = n - x;
        if(!(m%x))
            cnt++;
        x++;
    }

    cout << cnt;
    return 0;
}
