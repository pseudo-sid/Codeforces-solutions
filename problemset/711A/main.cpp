#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int n;	cin >> n;
	string s[n];
	for(int i = 0; i < n; i++)
		cin >> s[i];
	bool flag = false;
	for(int i = 0; i < n; i++){
		if(s[i][0] == 'O' and s[i][1] == 'O'){
			s[i][0] = s[i][1] = '+';
			flag = true;
			break;
		}

		if(s[i][3] == 'O' and s[i][4] == 'O'){
			s[i][3] = s[i][4] = '+';
			flag = true;
			break;
		}
	}
	if(flag)
	{	
		cout <<"YES\n";
		for(int i = 0; i < n; i++)
			cout << s[i] << "\n";
	}
	else
		cout <<"NO\n";
	return 0;
}