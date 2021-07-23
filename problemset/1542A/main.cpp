#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, o, e, t, x;
    cin >> t;
    while(t--){
        cin >> n;
        o = 0;
        e = 0;
        for(int i = 0; i < 2*n; i++){
            cin >> x;
            if(x % 2)
                o++;
            else
                e++;
        }
        if(o == e)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
