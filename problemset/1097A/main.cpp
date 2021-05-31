#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string table;   cin >> table;
    vector<string> v;
    string hand;
    while(cin >> hand)
        v.push_back(hand);
    bool flag = false;
    for(string h: v){
        if(table[0] == '1'){
            if(h[0] == '1' or h[1] == table[2])
            {
                flag = true;
                break;
            }
        }
        else{
            if(h[0] == '1'){
                if(h[2] == table[1])
                {
                    flag = true;
                    break;
                }
            }
            else{
                if(h[0] == table[0] or h[1] == table[1])
                {
                    flag = true;
                    break;
                }
            }
        }
    }
    if(flag)
        cout <<"YES";
    else
        cout <<"NO";
    return 0;
}
