#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;  cin >> n;
    int m;  cin >> m;
    char x;
    char color[] = {'C', 'M', 'Y'};
    bool bnw = true;
    for(int i = 0; i < n; i++){
        if(!bnw)
            break;
        for(int j = 0; j < m; j++){
            cin >> x;
            for(int k = 0; k < 3; k++ )
                if(x == color[k])
                    bnw = false;
        }
    }
    if(bnw)
        cout << "#Black&White";
    else
        cout << "#Color";
    return 0;
}
