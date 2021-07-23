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
        int a;  cin >> a;
        int b;  cin >> b;
        int c;  cin >> c;
        int d;  cin >> d;
        if(n * (a-b) > (c+d) or n * (a+ b) < (c-d))
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}
