//Wrong answer

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

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
        ll balance = coins[i].first;
        int s =0, e = n-1;
        int ans;
        if(balance < prices[0].first)
            ans = -1;
        else if (balance > prices[n-1].first)
            ans = n;
        else
        {
            while(s <= e){
                ans = (s + e) / 2;
                if(prices[ans].first > balance and prices[ans-1].first <= balance)
                    {
                        ans--;
                        break;
                    }
                if(prices[ans].first < balance)
                    s = ans+1;
                else
                    e = ans -1;
            }
        }
        cout << ans+1 << endl;
    }

    return 0;
}
