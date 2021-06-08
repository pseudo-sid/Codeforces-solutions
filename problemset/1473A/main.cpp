#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt","w", stdout);
	// #endif

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;	cin >> t;
	while(t--){
		int n;	cin >> n;
		int d;	cin >> d;
		vector<int> a;
		a.reserve(n);
		int x;
		for(int i = 0; i < n; i++){
			cin >> x;
			a.push_back(x);
		}
		sort(a.begin(), a.end());
		int c = a[0]+ a[1];
		bool flag= true;
		flag = a[0] <=d;
		if(c > d and flag)
			for(int i = 0; i < n; i++){
				if(a[i] > d){
					flag = false;
					break;
				}
			}
		if(flag)
			cout <<"YES\n";
		else
			cout <<"NO\n";
	}
	return 0;
}