#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin >> n;
    int m;  cin >> m;
    vector<int> arr;
    arr.reserve(n);
    int x;
    while(n--){
        cin >> x;
        arr.push_back(x);
    }
    int s = 0;
    sort(arr.begin(), arr.end());
    for(int i =0; i < m; i++){
        if(arr[i] > 0)
            break;
        s += arr[i];
    }
    cout << -s <<"\n";
    return 0;
}
