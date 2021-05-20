#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin >> n;
    string s;
    unordered_map<string, int> m;
    while(n--){
        cin >> s;
        if(m[s] == false){
            m[s] = true;
            cout << "OK";
        }
        else{
            int i = 1;
            string t = s + to_string(i);
            
            m[t] = true;
            cout << t;
        }
        cout << endl;
    }
    return 0;
}
