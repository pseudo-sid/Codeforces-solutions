#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        int a;  cin >> a;
        int b;  cin >> b;
        int c;  cin >> c;
        int n;  cin >> n;

        int max_coins_currently = max(max(a,b), c);
        
        n -= max_coins_currently - a;
        a = max_coins_currently;

        n -= max_coins_currently - b;
        b = max_coins_currently;
        
        n -= max_coins_currently - c;
        c = max_coins_currently;
    

        if(n >= 0){
            if(n%3 == 0)
                cout << "YES";
            else
                cout << "NO";
        }
        else
            cout <<"NO";
        cout << "\n";
    }
    return 0;
}
