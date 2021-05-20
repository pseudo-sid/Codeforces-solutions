#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        int odd = 0, even = 0;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i%2 == 0 and a[i]%2 != 0)
                even++;
            if(i%2 != 0 and a[i]%2 == 0)
                odd++;
        }

        if(odd != even)
            cout << -1;
        else
            cout << odd;
        cout << "\n";
    }
    return 0;
}
