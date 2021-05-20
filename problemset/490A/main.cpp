#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin >> n;
    vector<pair<int, int> > t;
    t.reserve(n);
    int x;
    for(int i = 1; i <= n; i++){
        cin >> x;
        t.push_back(make_pair(x, i));
    }
    sort(t.begin(), t.end());
    int a = -1, b = -1, c = -1;
    if(t[0].first == 1)
        a = 0;
    for(int i = 0; i < n; i++){
        if(t[i].first == 2)
        {
            b = i;
            break;
        }
    }
    for(int i = 0; i <n; i++){
        if(t[i].first == 3)
        {
            c = i;
            break;
        }
    }
    int w = 0;
    vector<vector<int> > teams;
    int j = a, k = b, l = c;
    if(a == -1 or b == -1 or c == -1)
        cout << 0;
    else
    {
        while(j < b and k < c and l < n){
            w++;
            int arr[] = {t[j++].second, t[k++].second, t[l++].second};
            vector<int> v(arr, arr+3);
            teams.push_back(v);
        }
        cout << w << endl;
        if(w > 0)
        {
            for(vector<int> v : teams){
            for(int c : v)
                cout << c <<" ";
            cout << endl;
            }
        }
    }
    return 0;
}