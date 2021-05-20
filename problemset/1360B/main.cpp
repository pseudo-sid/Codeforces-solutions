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
        int athletes[n];
        for(int i = 0; i < n; i++)
            cin >> athletes[i];
        sort(athletes, athletes+n);
        int min_strength = INT_MAX;
        for(int i = 1; i < n; i++)
            min_strength = min(athletes[i] - athletes[i-1], min_strength);
        cout << min_strength <<"\n";
    }
    return 0;
}
