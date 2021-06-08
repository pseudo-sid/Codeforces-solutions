#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	// /* code */
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	int k;	cin >> k;
	int r;	cin >> r;
	int i;
	for(i = 1; i < 10; i++)
		if((k * i) % 10 == r or (k*i) % 10 == 0)
			break;
	cout << i;
	return 0;
}