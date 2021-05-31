//Incomplete

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n;  cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int i = 0, j, k;
    int max_streak = 0;
    while(i < n){
        int left_streak  = i;
        while( i < n and arr[i] == 1){
            i++;
        }
        int left_streak = i - left_streak;
        int streak = left_streak;
        while( i < n and arr[i] == 1){
            i++;
        }
        streak += i - left_streak;
    }
    return 0;
}
