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
        vector<long> v(26, 0);
        for(long p = 0; p < n; p++){
            string s;   cin >> s;
            for(long u = 0; u < s.size(); u++)
                ++v[s[u] - 'a'];
        } 
        bool res(true);
        for(long p = 0; p <26; p++)
            res = res and (v[p] %n == 0);
        cout << (res? "YES\n" : "NO\n");
    }
    return 0;
}
