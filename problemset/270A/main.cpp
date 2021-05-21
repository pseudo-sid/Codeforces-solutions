#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--){
        int a;  cin >> a;   //angle which is given
        int s = 3;
        int e = 360;
        bool flag = false;
        while(s <= e){
            //guessing number of sides of this angle. 
            //Each polygon has internal angle (n-2) * 180/n
            //if number of sides found, polygon exists.
            int m = (s + e) /2;
            double angle = (double)(m-2) * 180.0 / m;
            if(angle == a){
                flag = true;
                break;
            }
            if(angle < a)
                s= m + 1;
            else
                e = m-1;
        }
        if(flag)
            cout << "YES";
        else
            cout <<"NO";
        cout << endl;
    }
    return 0;
}
