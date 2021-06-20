#include<bits/stdc++.h>
using namespace std;

int f(int a, int b){
    int anss = 0;
    while(b > a * 2){
        a = a * 2;
        anss++;
    }
    return anss;
}

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> v;
        v.reserve(n);
        int c;
        for(int i = 0; i < n ; i++){
            cin >> c;
            v.push_back(c);
        }
        int elements_added = 0;
        int maxx, minn;
        for(int i = 0; i < n-1; i++){
            maxx = max(v[i], v[i+1]);
            minn = min(v[i], v[i+1]);
            if(maxx > minn * 2){
                elements_added += f(minn, maxx);
            }
        }
        cout << elements_added <<"\n";
    }
    return 0;
}
