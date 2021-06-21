#include<iostream>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        ll x, s1, s2, e;
        for(int i =0; i < n; i++){
            cin >> x;
            if(i == 0)
                s1 = x;
            if(i == 1)
                s2 = x;
            if(i == n-1)
                e = x;
        }

        if(e >= s1+ s2)
            cout << 1 << " 2 " << n;
        else
            cout << -1;
        cout << "\n";
    }
    return 0;
}
