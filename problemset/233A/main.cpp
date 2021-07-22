#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;  cin >> n;
    if(n%2)
        cout << -1;
    else{
        for(int i = 1; i <= n; i++){
            if(i % 2)
                cout << i+1 << " ";
            else
                cout << i -1 << " ";
        }
    }
    return 0;
}