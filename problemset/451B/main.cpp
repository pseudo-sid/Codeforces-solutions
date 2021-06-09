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
	vector<int> a;
	a.reserve(n+1);
	int x;
	a.push_back(-1);
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		a.push_back(x);
	}
	bool dec = false;
	int s = 1, e = 1, i = 1;
	while(i < n){
		if(dec and a[s] > a[i])
			break;
		if(a[i] <= a[i+1]){
			i++;
			continue;
		}
		else{
			if(dec)
				break;
			else{
				s = i;
				while(i < n and a[i] >= a[i+1])
					i++;
				e = i;
				dec = true;
			}
		}
	}


	if(i < n)
		cout <<"no";
	else
	{
		cout <<"yes\n";
		cout << s << " " << e;
	}
	return 0;
}











