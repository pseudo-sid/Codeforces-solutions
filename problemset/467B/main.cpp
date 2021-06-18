#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;  cin >> n;
    ll m;  cin >> m;
    ll k;  cin >> k;

    vector<ll> x;
    x.reserve(m+1);
    ll c;

    for(int i = 1; i <= m+1; i++){
        cin >> c;
        x.push_back(c);
    }

    ll fedor = x[m];
    int ct = 0;
    for(int i = 0; i < m; i++){
        int diff = 0;
        fedor = x[m];
        ll player = x[i];
        while((player > 0 or fedor > 0)and diff <= k){
            if((fedor & 1) != (player & 1))
                diff++;
            fedor = fedor >> 1;
            player = player >> 1;
        }
        if(diff <= k)
            ct++;
    }

    cout << ct <<"\n";
    return 0;
}
