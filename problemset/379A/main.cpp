#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int a;  cin >> a;
    int b;  cin >> b;
    
    int hours = a;
    int c = a;
    while(c >= b){
        hours += c/b;
        c = c / b + c % b;
    }
    cout << hours << "\n";
    return 0;
}
