#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;	cin >> t;
	while(t--){
		int n;	cin >> n;
		vector<int> a;
		a.reserve(n);
		int x;
		set<int> dist;
		for(int i = 0; i < n; i++)
		{
			cin >> x;
			a.push_back(x);
			dist.insert(x);
		}
		if(n == 1)
			cout <<"0\n";
		else
		{
			sort(a.begin(), a.end());
			x = -1; int ct = 1;
			int i = 0;
			while(i < n-1){
				if(a[i] == a[i+1]){
					int s = i;
					while(i < n-1 and a[i] == a[i+1])
						i++;
					if(ct < i-s+1){
						x= a[i];
						ct = i-s+1;
					}
				}
				i++;
			}
			dist.erase(x);
			int s = (int) dist.size();
			if(ct - s >=2){
				ct--;
				s++;
			}
			cout << min(ct, s)<<"\n";
		}
	}
	
	return 0;
}













