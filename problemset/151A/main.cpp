#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n, k , l ,c , d ,p ,nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_drink = l * k / (n * nl);
    int lime_slices = d * c / n;
    int salt_drinks = p / (np*n);
    int toasts = min(total_drink, min(lime_slices, salt_drinks));
    cout << toasts;
    return 0;
}
