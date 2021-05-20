#include<iostream>
#include<climits>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;  cin >> n;
    int arr[n];
    int max_element = INT_MIN;
    for(int i =0; i < n; i++){
        cin >> arr[i];
        max_element = max(arr[i], max_element);
    }
    int S =0;
    for(int i =0; i < n; i++)
    {
        S += max_element - arr[i];
    }

    cout << S;
    return 0;
}
