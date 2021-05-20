#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin >> n;
    int k;  cin >> k;

    vector<int> y;
    y.reserve(n);
    int c;
    for(int i = 0; i < n; i++){
        cin >> c;
        y.push_back(c);
    }
    sort(y.begin(), y.end());
    int limit = 5 - k;
    int teams = 0;
    if(n < 3)
        cout << 0;
    else
    {
        for(int i = 0; i < n; i+= 3){
        if(y[i] <= limit and y[i + 1] <= limit and y[i + 2] <=  limit) 
            teams++;
        else
            break;
        }
    cout << teams;
    }
    return 0;
}
