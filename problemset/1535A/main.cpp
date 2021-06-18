#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        int arr[4];
        for(int i = 0; i < 4; i++)
            cin >> arr[i];
        int w1, w2;
        if(arr[0] > arr[1])
            w1 = 0;
        else
            w1 = 1;
        if(arr[2] > arr[3])
            w2 = 2;
        else
            w2 = 3;
        int matches[] = {1,0,3,2};
        if(arr[w1] <= arr[matches[w2]] or arr[w2] <= arr[matches[w1]])
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
