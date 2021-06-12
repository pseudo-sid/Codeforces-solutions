#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	ios::sync_with_stdio(false);
	cin.tie(NULL);

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
	int j = 1, k = 1;
	for(int i = 1; i < n; i++){
		if(a[i] > a[i+1]){
			j = i;
			while(i < n and a[i] >= a[i+1])
				i++;
			k = i;
			break;
		}
	}
	int l = j, m = k;
	while(j < k)
		swap(a[j++], a[k--]);
	

	bool flag = true;
	for(int i = 1; i <n; i++)
	{
		if(a[i] > a[i+1])
		{
			flag = false;
			break;
		}
	}
	
	if(flag){
		cout << "yes\n";
		cout << l <<" " << m;
	}
	else
		cout <<"no";
	
	return 0;
}











