#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	long long a[28];
	memset(a, 0, sizeof(a));
	
	for (int i = 0; i < n; ++i) {
		int b;
		cin >> b;
		a[b%28]++;
	}
	
	long long cnt = a[0]*(a[0]-1)/2 + a[14]*(a[14]-1)/2;
	for (int i = 1; i < 14; ++i) {
		cnt += a[i]*a[28-i];
	}
	cout << cnt;
	
	return 0;
}
