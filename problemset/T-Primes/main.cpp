#include<bits/stdc++.h>
#define ll long long int
using namespace std;

set<ll> tprime;
int arr[(int)1e6 + 10];
void t_primes(){
    tprime.insert(4);
    for(int i = 3; i < (int)1e6 + 1; i+=2){
        if(arr[i] == 0){
            tprime.insert(i*i);
            for(int j = i; j <= 1e6; j += i)
                arr[j] = 1;
        }
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;   cin >> n;
    t_primes();
    for(int i = 0; i < n; i++){
        ll x;   cin >> x;
        if(tprime.find(x) != tprime.end())
            cout<<"YES\n";
        else
            cout <<"NO\n";           
    }
    return 0;
}
