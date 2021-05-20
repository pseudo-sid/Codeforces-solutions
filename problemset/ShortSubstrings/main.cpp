#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        string b;   cin >> b;
        vector<string> v;
        for(int i =0; i < b.length(); i+=2){
            v.emplace_back(b.substr(i, 2));
        }
        int s =0, e = v.size();
        int length;
        int x = 1;
        int y = -2;
        int z = -2 * v.size();
        int D = sqrt(pow(y,2) - 4*x*z);
        int soln = (-y + D)/2;
        
    }
    return 0;
}
