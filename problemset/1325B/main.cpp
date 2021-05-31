#include<iostream>
#include<unordered_set>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    
    while(t--){
        int n;  cin >> n;
        unordered_set<int> s;
        s.reserve(n);
        int x;
        for(int i = 0; i < n; i++){
            cin >> x;
            s.insert(x);
        }
        cout << s.size()  <<"\n";
    }
    return 0;
}
