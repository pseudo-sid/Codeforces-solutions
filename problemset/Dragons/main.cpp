#include<bits/stdc++.h>
#define p pair<int, int>
using namespace std;


int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int s;  cin >> s;
    int n;  cin >> n;
    vector<p> v;
    v.reserve(n);
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        int y;  cin >> y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(), v.end());
    bool flag = true;
    for(int i = 0; i < n; i++){
        if(s <= v[i].first){
            flag = false;
            break;
        }
        s += v[i].second;
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
