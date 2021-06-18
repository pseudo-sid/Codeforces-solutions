#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map< string, pair<string, int> > w;
    int n;  cin >> n;
    int m;  cin >> m;
    string a, b;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        w[a] = make_pair(b,2);
        w[b] = make_pair(a,1);
    }
    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        string t = w[s].first;
        if(s.length() == t.length()){
            if(w[s].second == 1)
                cout << t <<" ";
            else
                cout << s <<" ";
        }
        else{
            if(s.length() > t.length())
                cout << t <<" ";
            else
                cout << s << " ";
        }
    }


    return 0;
}
