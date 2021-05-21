#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        int x;  cin >> x;
        string c = to_string(x);
        int count_press = ((x%10) - 1) * 10;
        int presses[] = {1,3,6,10};
        count_press += presses[c.length() -1];
        cout << count_press << endl;
    }
    return 0;
}
