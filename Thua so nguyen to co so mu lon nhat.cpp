#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<long long, int> a, pair<long long, int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second > b.second;
}

int main () {
    long long n;
    cin >> n;
    
   	vector<pair<long long, int>> vp;
   
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            int d = 0;
            while (n % i == 0) {
                ++d;
                n /= i;
            }
            vp.push_back(make_pair(i, d));
        }
        if (n == 1)
            break;
    }
    
	sort(vp.begin(), vp.end(), cmp);
	cout << vp[0].first << " " << vp[0].second;
    
    return 0;
}
