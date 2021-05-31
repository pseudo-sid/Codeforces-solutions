#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin >> n;
    int k;  cin >> k;
    int cum[n+1];
    int arr[n]; cum[0] = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cum[i+1] = cum[i] + arr[i];
    }
    int i = 0, j = k, min_idx;
    int mini = INT_MAX;
    while(j <= n){
        int s = cum[j++] - cum[i++];
        if(s < mini){
            mini = s;
            min_idx = i;
        }
    }
    cout << min_idx;
    return 0;
}
