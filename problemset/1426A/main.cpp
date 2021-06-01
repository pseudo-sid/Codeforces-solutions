#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        double n;  cin >>n;
        double x;  cin >> x;

        if(n <= 2)
        {
            cout << "1\n";
            continue;
        }
        else
            cout << (int) ceil((n-2)/x) + 1 <<"\n";
    }

    return 0;
}
