#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        int a;  cin >> a;
        int b;  cin >> b;
        int moves = 0;
        if(a < b){
            int d = b-a;
            moves += d/10;
            if(d%10)
                moves++;
        }
        else if(a > b){
            int d = a-b;
            moves += d/10;
            if(d%10)
                moves++;
        }
        cout << moves << endl;
    }
    return 0;
}
