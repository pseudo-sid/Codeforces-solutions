#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin >> n;
    int minimum_height = INT_MAX, j = 0, maximum_height = INT_MIN, k = n-1;
    vector<int> v;
    v.reserve(n);
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        v.push_back(x);
    }
    for(int i =0; i < n; i++){
        if(v[i] <= minimum_height)
        {
            minimum_height = v[i];
            j = i;
        }
        if(v[i] > maximum_height){
            maximum_height = v[i];
            k = i;
        }
    }
    if(k > j){
        cout << (k-1) + (n-j) -1;
    }
    else
        cout << (k-1) + (n - j);
    return 0;
}
