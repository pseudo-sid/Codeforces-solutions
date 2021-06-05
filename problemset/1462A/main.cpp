#include<bits/stdc++.h>
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
        vector<ll> seq_whiteboard;
        ll x;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            
            seq_whiteboard.push_back(x);
        }
        int i = 0, j = n -1;
        while(i <= j){
            if(i + j == n-1)
                cout << seq_whiteboard[i++] <<" ";
            else
                cout << seq_whiteboard[j--] << " ";
            
        }
        cout << "\n";

    }
    return 0;
}
