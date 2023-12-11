#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    
    while (t--) {
        string s;
        getline(cin, s);

        int i = 0;
        bool flag = true;
        string heso = "";
        string mu = "";
        map<int, int> mp;
        while (i < s.size()) {
            if (isdigit(s[i])) {
                if (flag) {
                    while (isdigit(s[i]) && i < s.size()) heso = heso + s[i++];
                    flag = false;
                }
                else {
                    while (isdigit(s[i]) && i < s.size()) mu = mu + s[i++];
                    mp[stoi(mu)] += stoi(heso);
                    mu = "";
                    heso = "";
                    flag = true;
                }
            }
            else i++;
        }

        string res = "";

        for (auto x : mp) {
            res = res + to_string(x.second) + "x^" + to_string(x.first) + " + ";
        }
        res.pop_back();
        res.pop_back();
        cout << res << endl;
    }

    return 0;
}
