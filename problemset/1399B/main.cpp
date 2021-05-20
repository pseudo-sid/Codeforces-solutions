#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        pair<ll,ll> gifts[n];
        ll min_a = INT64_MAX;
        ll min_b = INT64_MAX;
        for(int i = 0; i < n; i++){
            cin >> gifts[i].first;
            min_a = min(min_a, gifts[i].first);
        }

        for(int i = 0; i < n; i++){
            cin >> gifts[i].second;
            min_b = min(min_b, gifts[i].second);
        }
        
        ll moves = 0;
        for(int i = 0; i < n; i++)
        {
            ll x = gifts[i].first - min_a;
            ll y = gifts[i].second - min_b;
            moves += max(x,y);
        }
        cout << moves <<"\n";

    }
    return 0;
}
