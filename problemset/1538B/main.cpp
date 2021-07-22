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
        vector<int> arr(n);
        int s = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            s += arr[i];
        }
        if(s % n != 0){
            cout << -1 << "\n";
            continue;
        }
        int res = 0;
        s /=n;
        for(int i =0 ; i < n; i++)
            if(arr[i] > s)
                res++;
        cout << res <<"\n";
    }
    return 0;
}
