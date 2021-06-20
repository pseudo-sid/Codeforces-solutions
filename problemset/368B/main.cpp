#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin >> n;
    int m;  cin >> m;
    int arr[n+1];
    int ct[100005] = {0};
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    
    int dp[100005] = {0};
    for(int i = n; i>=1; i--){
        dp[i] = (ct[arr[i]] == 0)? 1: 0;
        dp[i] += dp[i+1];
        ct[arr[i]]++;
    }
    int x;
    for(int i = 0; i < m; i++){
        cin >> x;
        cout << dp[x] << "\n";
    }

    return 0;
}
