#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n;  cin >> n;
    int cubes = n;
    int ht = 0;
    for(int i = 1; i <=n; i++){
        int p = (i) * (i + 1) /2;
        if(p > cubes)
            break;
        cubes -= p;
        ht++;
    }
    cout << ht;
    
    return 0;
}
