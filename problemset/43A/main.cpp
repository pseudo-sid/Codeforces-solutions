#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string r, s;
    int n;  cin >> n;
    cin >> s;
    string t;
    int x = 1, y = 0;
    n--
    while(n--){
        cin >> t;
        if(t == s)
            x++;
        else{
            r = t;
            y++;
        }
    }
    if(x > y)
        cout << s <<"\n";
    else
        cout << r <<"\n";
    return 0;
}
