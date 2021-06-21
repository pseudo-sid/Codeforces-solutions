#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k;  cin >> k;
    int growth[12];
    for(int i = 0; i < 12; i++)
        cin >> growth[i];
    
    sort(growth, growth+12);
    int i = 11;
    while(i >=0 and k >0)
        k -= growth[i--];
    
    if(k > 0)
        cout << -1;
    else
        cout << 11 - i;
    
    return 0;
}
