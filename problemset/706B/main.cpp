#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n;  cin >> n;
    vector<pair<int, int> > prices;
    prices.reserve(n);  int x;
    for(int i = 1; i <= n; i++){
        cin >> x;
        prices.push_back(make_pair(x, i));
    }
    int q;  cin >> q;
    vector<pair<ll, int> > coins;
    coins.reserve(q);

    ll m;
    for(int i = 1; i <= q; i++)
    {
        cin >> m;
        coins.push_back(make_pair(m,i));
    }

    sort(prices.begin(), prices.end());
    for(int i = 0; i < q; i++){
        int balance = coins[i].first;
        int s =0, e = n-1;
        while(s <= e){
            int mid = (s + e)/2;
            
        }
    }

    return 0;
}
