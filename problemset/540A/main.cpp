#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n;	cin >> n;
	string o;	cin >> o;	//original state
	string c;	cin >> c;	//combination
	int moves = 0;
	for(int i = 0; i < c.length(); i++){
		int a = abs(o[i] - c[i]);
		int b = abs(10 + o[i] - c[i]);
		int d = abs(10 + c[i] - o[i]);
		moves += min(a,min(b,d));	
	}

	cout << moves;

	return 0;
}