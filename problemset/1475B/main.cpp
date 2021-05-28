#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;  cin >> t;
    while(t--){
        long n;  cin >> n;
        long mod = n % 2020;
        long div = n/2020;
        if(mod <= div)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}
