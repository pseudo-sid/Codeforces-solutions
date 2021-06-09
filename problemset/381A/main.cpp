#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif

	int n;	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int i = 0, j = n-1;
	int s = 0, d = 0;
	int mov = 0;
	while(i <= j){
		if(mov%2){
			if(arr[j] > arr[i])
				d += arr[j--];
			else
				d += arr[i++];
		}
		else{
			if(arr[j] > arr[i])
				s += arr[j--];
			else
				s += arr[i++];
		}
		mov++;
	}
	cout << s << " " << d;
	return 0;
}







