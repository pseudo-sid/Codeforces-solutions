#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> arr;
        arr.reserve(n);
        int m = INT_MAX;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            m = min(m,arr[i]);
        }
        int cm = 0;
        for(int i = 0; i < n; i++)
            if(arr[i] == m)
                cm++;
        cout << n - cm << "\n";
    }
    return 0;
}
