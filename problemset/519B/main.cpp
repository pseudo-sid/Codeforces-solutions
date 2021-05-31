#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;  cin >> n;
    int arr1[n], arr2[n-1], arr3[n-2]; 
    int x;
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for(int i = 0; i < n-1; i++)
    {
        cin >> arr2[i];
    }
    for(int i = 0; i < n-2; i++)
    {
        cin >> arr3[i];
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n-1);
    sort(arr3, arr3 + n-2);
    bool flag = false;
    for(int i = 0; i < n-1; i++){
        if(arr1[i] != arr2[i]){
            flag = true;
            cout << arr1[i] << endl;
            break;
        }
    }
    if(!flag)
        cout << arr1[n-1] << endl;
    
    flag = false;
    for(int i = 0; i < n-2; i++){
        if(arr2[i] != arr3[i]){
            flag = true;
            cout << arr2[i];
            break;
        }
    }
    if(!flag)
        cout << arr2[n-2];
    return 0;
}