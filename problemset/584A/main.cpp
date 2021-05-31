#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ll n;  cin >> n;
    int t;  cin >> t;
    if(n == 1){
        if(t == 10)
            cout << -1;
        else
            cout << t;
    }
    else
        {
            if(t == 10)
                {
                    string s = "1";
                    for(int i = 0; i < n-1; i++)
                        s += "0";
                    cout << s;
                }
            else
                {
                    string s = to_string(t);
                    for(int i = 0; i <n-1; i++)
                        s += "0";
                    cout << s;
                }
        }
    return 0;
}
