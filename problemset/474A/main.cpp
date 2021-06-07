#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    char c; cin >> c;
    int shift;
    if(c == 'R')
        shift = -1;
    else
        shift = 1;
    string s;   cin >> s;
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    unordered_map<char, int> mapping;
    for(int i = 0; i < keyboard.length(); i++)
        mapping[keyboard[i]] = i;
    for(int i = 0; i < s.length(); i++)
        cout << keyboard[mapping[s[i]] + shift];
    return 0;
}
