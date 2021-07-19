#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        int o = 0, t = 0;
        int x;
        while(n--){
            cin >> x;
            if(x == 1)
                o++;
            else
                t++;
        }
        if(t % 2 ==0 and o % 2 == 0)
            cout << "YES\n";
        else if(o > 0 and o % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
