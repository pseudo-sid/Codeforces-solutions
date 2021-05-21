#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        ll n;   cin >> n;
        ll temp = n;
        int threes = 0;
        while(!(temp % 3)){
            temp/=3;
            threes++;
        }
        int twos =0;
        while(!(temp%2)){
            temp /= 2;
            twos++;
        }
        if(temp != 1 || twos > threes){
            cout << -1 << endl;
        }
        else{
            int moves = 0;
            moves += threes - twos;     //Moves to match number of twos to threes in order to make all factors power of 6
            moves += threes;    //log n base 6 (number of divide by 6 moves)
            cout << moves << endl;
        }
    }
    return 0;
}
