#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string s;   cin >> s;
    int i = 0;
    bool ab = false, ba = false;
    while(i < s.length()){
        if(s.substr(i, 2) == "AB" and !ab){
            ab = true;
            i++;
        }
        else if(s.substr(i, 2) == "BA" and !ba){
            ba = true;
            i++;
        }
        i++;
    }
    if(ab and ba)
        cout <<"YES\n";
    else
        cout <<"NO\n";
    return 0;
}
