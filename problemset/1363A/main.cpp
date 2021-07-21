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
        int x;  cin >> x;
        int c;
        int o = 0, e = 0;
        while(n--){
            cin >> c;
            if(c % 2)
                o++;
            else
                e++;
        }
        if(o == 0 or (e <= x -1 and (x-e) % 2 == 0 and o + e -1 < x))
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}
