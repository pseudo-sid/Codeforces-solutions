#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n; cin >> n;
    int m = 0, c = 0;
    int mi, ci;
    while(n--){
        cin >> mi >> ci;
        if(mi == ci)
            continue;
        else
        {
            if(mi > ci)
                m++;
            else
                c++;
        }
    }
    if(m == c)
        cout << "Friendship is magic!^^";
    else if ( m > c)
        cout <<"Mishka";
    else
        cout << "Chris";
    return 0;
}