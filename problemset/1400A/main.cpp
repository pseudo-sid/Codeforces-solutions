#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        string s;   cin >> s;
        for(int i = 0; i < 2*n-1; i+= 2)
            cout << s[i];
        cout <<endl;
    }
    return 0;
}
