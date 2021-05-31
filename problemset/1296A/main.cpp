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
        vector<int> v;
        v.reserve(n);
        int s = 0;
        int x;
        for(int i = 0; i < n; i++){
            cin >> x;
            v.push_back(x);
            s += x;
        }
        if(s%2 or s == 1)
            cout << "YES\n";
        else{
            bool flag1 = false, flag2 = false;
            for(int i = 0; i < n; i++){
                if(flag1 and flag2)
                    break;
                if(v[i] % 2)
                    flag1 = true;
                if(v[i] % 2 == 0)
                    flag2 = true;
            }
            if(flag1 and flag2)
                cout << "YES\n";
            else
                cout <<"NO\n"; 
        }
    }
    return 0;
}
