#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int Y;  cin >> Y;
    int W;  cin >> W;
    int B = 6;
    int A = 6 - max(Y,W) + 1;
    if(A%2 == 0 and B % 2 == 0){
        A /= 2;
        B /= 2;        
    }
    if(A % 3 == 0 and B % 3 == 0){
        A /= 3;
        B /= 3;
    }
    cout << A <<"/" << B;
    return 0;
}
