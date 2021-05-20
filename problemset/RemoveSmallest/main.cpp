#include<bits/stdc++.h>
using namespace std;



int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a+n);
        bool flag=  true;
        for(int i = 0; i < n-1; i++){
            if(a[i+1] - a[i] > 1)
                {
                    flag = false;
                    break;
                }
        }
        if(flag)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
    
}
