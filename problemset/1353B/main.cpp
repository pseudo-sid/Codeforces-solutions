#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;  cin >> T;
    while(T--){
        int n;  cin >> n;
        int k;  cin >> k;
        vector<int> a,b;
        a.reserve(n);
        b.reserve(n);
        int x;
        for(int i = 0; i < n; i++){
            cin >> x;
            a.push_back(x);
        }
        for(int i = 0; i < n; i++){
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i = 0;
        int j = n-1;
        while(k--){
            if(b[j] > a[i])
                swap(a[i], b[j]);
            i++;
            j--;
        }
        int s= 0;
        for(int i =0; i < n; i++)
            s += a[i];
        cout << s << "\n";
    }
    return 0;
}