//Initialized
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    
    int t;  cin >> t;
    while(t--){
        ll n;   cin >> n;
        ll k;   cin >> k;
        if(k <= n-1)
            cout << k << "\n";
        else{
           ll c = k/(n-1);
           if(k % (n-1) == 0)
            c--;
           ll numb_undivisible_covered = c * (n-1);
           ll pointer = c * n;
           ll reqd = k - numb_undivisible_covered;
           cout << pointer + reqd <<"\n";
        }
    }
    return 0;
}