#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47, 53};
    int n;  cin >> n;
    int p = sizeof(primes) / sizeof(int);
    int m;  cin >> m;
    int j;
    for(int i =0; i < p; i++)
        if(primes[i] == n)
            j = i;
    if(primes[j+1] == m)
        cout << "YES";
    else
        cout <<"NO";
    return 0;
}
