#include <bits/stdc++.h>
using namespace std;

int main() {
	map<string, int> mp;	
	for (int i = 0; i < 10; ++i) {
		string s;
		int x;
		cin >> s >> x;
		mp[s] = x;
	}
	
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		
		long long sum = 0;
		string tmp = "";
		
		for(int i = 0; i < s.size(); i++){
			if(isalpha(s[i])){
				tmp += s[i];
			}
			else{
				sum += mp[tmp] * (s[i] - '0');
				tmp = "";
			}
		}
		cout << sum << "\n";
	}

	return 0;
}