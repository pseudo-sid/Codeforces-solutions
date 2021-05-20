#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n;  cin >> n;
    int m;  cin >> m;
    int c = n / m;
    int excess = c;
    while(c >= m){
        c /= m;
        excess++;
    }
    return 0;
}