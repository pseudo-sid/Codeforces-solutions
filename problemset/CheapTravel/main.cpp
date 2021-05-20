#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;  cin >> n;   //number of rides reqd
    int m;  cin >> m;   //number of rides in spl ticket
    int a;  cin >> a;   //cost of 1 ride
    int b;  cin >> b;   //cost of m ride ticket

    if(a * m < b)
        cout << a *n;
    else{
        int bus_passes = n/m;
        int remaining_passes = n % m;
        int cost = bus_passes * b;
        if(a * remaining_passes <= b)
            cost += a * remaining_passes;
        else
            cost += b;
        cout << cost;
    }
    return 0;
}