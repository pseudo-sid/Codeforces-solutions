#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;  cin >> t;
    string s; int n;
    
    while(t--){
        cin >> n;
        cin >> s;
        int flag[26] = {0};
        int sus = false;
        for(int i = 0; i < n; i++){
            char c = s[i];
            if(i > 0 and s[i] != s[i-1])
                flag[s[i-1] - 'A'] = 1;
            if(flag[c-'A'])
                {
                    sus = true;
                    break;
                }
        }
        if(sus)
            cout << "NO" << endl;
        else
            cout << "YES" <<endl;
    }
    return 0;
}
