#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int a[4];   // calories for every strip
    for(int i =0; i < 4; i++)
        cin >> a[i];
    char s[100005];   cin >> s;
    int cals =0;
    for(int i = 0; s[i] != '\0'; i++){
         int c = s[i] - '0';
         cals += a[c-1];
    }
    cout << cals;
    
    return 0;
}
