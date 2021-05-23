#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        int w;  cin >> w;
        int h;  cin >> h;
        int n;  cin >> n;

        int s = w * h;
        int count = 1;
        while(s%2 == 0){
            count *= 2;
            s/=2;
        }
        if(count >= n)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}
