#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        int a;  cin >> a;
        int b;  cin >> b;
        int l, w;
        if(a > b)
        {
            l = a;
            w = b;
        }
        else{
            l = b;
            w = a;
        }
        int area;
        if(2*w >= l){
            area = 4 * w*w;
        }
        else{
            area = l * l;
        }
        cout << area << "\n";
    }
    return 0;
}
