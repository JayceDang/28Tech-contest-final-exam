#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n][n];    
    map<int, int> mp;
    set<int> s;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            s.insert(a[i][j]);
        }
        for (auto i : s) {
            mp[i]++;
        }
        s.clear();
    }
    
    bool check = false;
    for (auto i : mp) {
        if (i.second == n) {
            cout << i.first << " ";
            check = true;
        }
    }
    
    if (!check)
        cout << "NOT FOUND";
    
    return 0;
}
