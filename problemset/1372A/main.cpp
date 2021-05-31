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
        for(int i = 0; i < n; i++)
            cout << 501 + (rand() % 499) << " ";
        cout <<"\n";
    }
    return 0;
}
