#include<bits/stdc++.h>
#define p pair<int, int> 
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;  cin >> n;
    vector<p> laptops;
    laptops.reserve(n);
    for(int i= 0; i < n; i++){
        int a;  cin >> a;
        int b;  cin >> b;
        laptops.push_back(make_pair(b,a));
    }
    sort(laptops.begin(), laptops.end());
    bool flag = false;
    for(int i = 0; i < n-1; i++){
        if(laptops[i].second > laptops[i+1].second)
            flag = true;
    }
    if(flag)
        cout <<"Happy Alex";
    else
        cout <<"Poor Alex";
    return 0;
}
